#include "CGADS/linear_list.h"
#include "../src/algorithm.cc"

#include <iostream>
#include <gtest/gtest.h>

TEST(LinearList, methods)
{
    LinearList<int> ll;
    ll.insert(0, 5);
    std::cout << ll.single_list_->next->data << std::endl;

    std::cout << worldlength() << std::endl;

    test7();
}
