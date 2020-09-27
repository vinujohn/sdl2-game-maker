#include "node.hpp"
#include "gtest/gtest.h"

TEST(NodeTest, JustWorks){
    Node n;
    EXPECT_EQ("Hello World!", n.SayHello());
}