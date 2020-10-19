const int MaxSize;

template <class Element>
class SequenceList
{
private:
    Element data[MaxSize]; //顺序表的元素，静态分配
    // Element *data;      //动态分配
    int length; //顺序表的长度
public:
    //OrderedList(int size);           //动态长度用
    SequenceList(){};
    bool insertE(Element e, int i);  //插入元素e到i
    bool deleteE(Element &e, int i); //删除位于i的元素，并把被删除的元素赋值给e
    int findE(Element e);            //查找第一个值为1的元素

    int get_length() { return length; }
    Element get_element(int pos)
    {
        if (pos <= length && pos > 0)
            return data[pos - 1];
        else
        {
            std::cout << "pos error" << endl;
            exit(1);
        }
    }
    void set_element(Element e, int pos) { data[pos - 1] = e; }
    ~OrderedList();
};
