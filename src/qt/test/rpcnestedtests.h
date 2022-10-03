// Copyright (c) 2016-2019 The Learncoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LEARNCOIN_QT_TEST_RPCNESTEDTESTS_H
#define LEARNCOIN_QT_TEST_RPCNESTEDTESTS_H

#include <QObject>
#include <QTest>

namespace interfaces {
class Node;
} // namespace interfaces

class RPCNestedTests : public QObject
{
public:
    RPCNestedTests(interfaces::Node& node) : m_node(node) {}
    interfaces::Node& m_node;

    Q_OBJECT

    private Q_SLOTS:
    void rpcNestedTests();
};

#endif // LEARNCOIN_QT_TEST_RPCNESTEDTESTS_H
