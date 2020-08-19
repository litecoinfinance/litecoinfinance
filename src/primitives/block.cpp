// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <primitives/block.h>

#include <util/strencodings.h>
#include <hash.h>
#include <tinyformat.h>
#include <crypto/common.h>
#include <crypto/scrypt.h>
#include "versionbits.h"

extern "C" void yescrypt_hash(const char *input, char *output);

uint256 CBlockHeader::GetHash() const
{
    return SerializeHash(*this);
}

uint256 CBlockHeader::GetPoWOldHash() const
{
    uint256 thash;
    scrypt_1024_1_1_256((char *) &nVersion, (char *) &thash);
    return thash;
}

uint256 CBlockHeader::GetPoWNewHash() const
{
    uint256 thash;
    yescrypt_hash((char *) &nVersion, (char *) &thash);
    return thash;
}

uint256 CBlockHeader::GetPoWHash() const
{
	if (nVersion & VERSIONBITS_FORK_CPU)
		return GetPoWNewHash();
	else
		return GetPoWOldHash();
}

std::string CBlock::ToString() const
{
    std::stringstream s;
    s << strprintf("CBlock(hash=%s, ver=0x%08x, hashPrevBlock=%s, hashMerkleRoot=%s, nTime=%u, nBits=%08x, nNonce=%u, vtx=%u)\n",
        GetHash().ToString(),
        nVersion,
        hashPrevBlock.ToString(),
        hashMerkleRoot.ToString(),
        nTime, nBits, nNonce,
        vtx.size());
    for (const auto& tx : vtx) {
        s << "  " << tx->ToString() << "\n";
    }
    return s.str();
}
