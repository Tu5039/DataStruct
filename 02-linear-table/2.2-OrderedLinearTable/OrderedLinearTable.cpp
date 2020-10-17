#include "OrderedLinearTable.h"
/*
template <class Element>
OrderedList<Element>::OrderedList(int size)
{
    data=new Element[size];
}
*/

template <class Element>
bool OrderedList<Element>::insertE(Element e, int i)
{
    if (i < 1 || i > length + 1) //判断插入的地址是否正确
        return false;

    if (length >= MaxSize) //判断存储空间是否已满
        return false;

    for (int j = length; j >= i; j--) //数据后移一个单位
        data[j] = data[j - 1];

    data[i - 1] = e;
    length++;

    return true;
}

template <class Element>
bool OrderedList<Element>::deleteE(Element &e, int i)
{
    if (i < 1 || i > length + 1) //判断删除的地址是否正确
        return false;

    e = data[i - 1];
    for (; i < length; i++)
        data[i - 1] = data[i];
    /*
    //也可以这样写
    for(int j=i;j<length;j++)
        data[j-1]=data[j]
    */

    length--;

    return true;
}

template <class Element>
int OrderedList<Element>::findE(Element e)
{
    for (int i = 0; i < length; i++)
        if (data[i] == e)
            return i + 1;

    return 0; //也可以是负数，表示无此元素
}