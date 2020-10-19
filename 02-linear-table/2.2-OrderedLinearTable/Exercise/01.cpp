/**
 * 从顺序表中删除具有最小值的元素（唯一）并由函数返回被删元素的值。
 * 空出的位置由最后一个元素填补。
 * 若顺序表为空则显示出错并退出运行。
*/

#include <iostream>
#include "SequenceList.h"
using namespace std;

template <class Element>
Element deleteMiniE(SequenceList<Element> list)
{
    if (list.get_length == 0)
    {
        cout << "Empty list!" << endl;
        exit(1);
    }

    Element e = list.get_element(1);
    int pos = 1;
    for (int i = 2; i <= list.get_length(); i++)
    {
        if (e > list.get_element(i))
        {
            e = list.get_element(i);
            pos = i;
        }
    }

    list.set_element(list.get_element(list.get_length()), pos);

    return e;
}

int main()
{

    return 0;
}