Litecoin Finance integration/staging treeq
=====================================

Important Official site url is changet!
=======================================
https://ltfn.scalaris.info/

What is LitecoinFinance?
----------------

Litecoin Finance / LTFN is a fork of Litecoin baced on CPU mining to provide better decentralization.
All holders of original LTC can split coins to chain LTFN if they was no spendet before block 1550000.

For more information, as well as an immediately useable, binary version of
the Litecoin Finance software, see [https://ltfn.scalaris.info/](https://ltfn.scalaris.info/).

License
-------

Litecoin Finance is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/litecoinfinance/litecoinfinance/tags) are created
regularly to indicate new official, stable release versions of Litecoin Finance.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Specifications
--------------
Start fork block 1550000

Ticker LTFN

Pow Algorithm: YescryptR32

P2P Port: 39328

RPC Port: 39327

Address letter prefix: C

Multisig Address prefix: letter N

Bech32 Address prefix: ltfn

2-way replay protection: Yes

Block time: 2.5m ( 150 second )

Maturity: 100 + 1 blocks

Block maximum size: 8 mb

Difficulty Re-target: Every block

Maximum coin supply: 94m

Network magic: a7b388e9

Postmine: 10m

forkid: 42

sighash forkid: 0x40

Tx Sighash structure: SIGHASH_ALL | SIGHASH_FORKID

SIGHASH_ALL | SIGHASH_FORKID in decimal: 65

