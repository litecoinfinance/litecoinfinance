// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LITECOINFINANCE_QT_LITECOINFINANCEADDRESSVALIDATOR_H
#define LITECOINFINANCE_QT_LITECOINFINANCEADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LitecoinFinanceAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LitecoinFinanceAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Litecoin Finance address widget validator, checks for a valid litecoin finance address.
 */
class LitecoinFinanceAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LitecoinFinanceAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LITECOINFINANCE_QT_LITECOINFINANCEADDRESSVALIDATOR_H
