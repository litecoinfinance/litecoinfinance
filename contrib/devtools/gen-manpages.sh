#!/usr/bin/env bash

export LC_ALL=C
TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

LITECOINFINANCED=${LITECOINFINANCED:-$BINDIR/litecoinfinanced}
LITECOINFINANCECLI=${LITECOINFINANCECLI:-$BINDIR/litecoinfinance-cli}
LITECOINFINANCETX=${LITECOINFINANCETX:-$BINDIR/litecoinfinance-tx}
WALLET_TOOL=${WALLET_TOOL:-$BINDIR/litecoinfinance-wallet}
LITECOINFINANCEQT=${LITECOINFINANCEQT:-$BINDIR/qt/litecoinfinance-qt}

[ ! -x $LITECOINFINANCED ] && echo "$LITECOINFINANCED not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
BTCVER=($($LITECOINFINANCECLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for litecoinfinanced if --version-string is not set,
# but has different outcomes for litecoinfinance-qt and litecoinfinance-cli.
echo "[COPYRIGHT]" > footer.h2m
$LITECOINFINANCED --version | sed -n '1!p' >> footer.h2m

for cmd in $LITECOINFINANCED $LITECOINFINANCECLI $LITECOINFINANCETX $WALLET_TOOL $LITECOINFINANCEQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${BTCVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${BTCVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
