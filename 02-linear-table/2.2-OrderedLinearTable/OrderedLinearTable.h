//这里的位置i指的是从1开始的第i个元素

#define MaxSize 50 //线性表的最大长度

template <class Element>
class OrderedList
{
private:
    Element data[MaxSize]; //顺序表的元素，静态分配
    // Element *data;      //动态分配
    int length; //顺序表的长度
public:
    //OrderedList(int size);           //动态长度用
    bool insertE(Element e, int i);  //插入元素e到i
    bool deleteE(Element &e, int i); //删除位于i的元素，并把被删除的元素赋值给e
    int findE(Element e);            //查找第一个值为1的元素
    ~OrderedList();
};
