Litecoin Finance Core
=============

Setup
---------------------
Litecoin Finance Core is the original Litecoin Finance client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Litecoin Finance transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Litecoin Finance Core, visit [bitcoincore.org](https://bitcoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Litecoin Finance Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/litecoinfinance-qt` (GUI) or
- `bin/litecoinfinanced` (headless)

### Windows

Unpack the files into a directory, and then run litecoinfinance-qt.exe.

### macOS

Drag Litecoin Finance Core to your applications folder, and then run Litecoin Finance Core.

### Need Help?

* See the documentation at the [Litecoin Finance Wiki](https://en.litecoinfinance.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#litecoinfinance](http://webchat.freenode.net?channels=litecoinfinance) on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net?channels=litecoinfinance).
* Ask for help on the [LitecoinFinanceTalk](https://litecoinfinancetalk.org/) forums, in the [Technical Support board](https://litecoinfinancetalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Litecoin Finance Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/bitcoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Litecoin Finance repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/litecoinfinance/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [LitecoinFinanceTalk](https://litecoinfinancetalk.org/) forums, in the [Development & Technical Discussion board](https://litecoinfinancetalk.org/index.php?board=6.0).
* Discuss project-specific development on #litecoinfinance-core-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=litecoinfinance-core-dev).
* Discuss general Litecoin Finance development on #litecoinfinance-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=litecoinfinance-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [litecoinfinance.conf Configuration File](litecoinfinance-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
