#include <iostream>
#include "SequenceList.h"
using namespace std;

template <class Element>
void reverseList(SequenceList<Element> list)
{
    Element tmp;
    for (int i = 1; i <= list.get_length(); i++)
    {
        tmp = list.get_element(i);
        list.set_element(list.get_element(list.get_length() + 1 - i), i);
        list.set_element(tmp, list.get_length() + i - 1);
    }
}
int main()
{
    return 0;
}
