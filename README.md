Litecoin Finance integration/staging treeq
=====================================

Important Official site url is changet from ltfn.org to!
=====================================

https://ltfn.scalaris.info/
=====================================

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

Old Pow Algorithm Before EPOCH 1618941625: YescryptR32 

New Pow Algorithm After EPOCH 1618941625: YesPoWerR16

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

Gravity Wave before block 1858801 with pastblock 12 after with standart 24 rule

Reward Returned at block 1858801: 50 coins

Reward 50 coins will from that block and next 661 200 blocks before it go to halving rule block, next 84 000 blocks will be with reward 25 , etc...

Maximum Coin Supply: 170 295 000

84 0000 * 50 + 84 000 * 25 + before update mined 178 800 * 12.5 + 661 200 by reward * 50 , then 25  halving will be every 84 0000 blocks what is at and  51 999 999.99022111 + 20 000 000 so the maximum amount will be 170295000
that ammount never be reached as some coins is losed forever from LTC chain, use  gettxoutsetinfo for undestand.  

Network magic: a7b388e9

Postmine: 10m

forkid: 42

sighash forkid: 0x40

Tx Sighash structure: SIGHASH_ALL | SIGHASH_FORKID

SIGHASH_ALL | SIGHASH_FORKID in decimal: 65

