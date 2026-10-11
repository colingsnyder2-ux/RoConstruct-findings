// from server: 85% by atomic.potato
struct CXTPControls
{
    char pad0[0x24];
    char field24[0x8];
    int field2c;
    int SetAt(int index, int item);
};

extern "C" int __stdcall sub_8EDB40(int, int, int, int);

int CXTPControls::SetAt(int index, int item)
{
    if (index < 0 || index >= this->field2c)
        index = this->field2c;
    sub_8EDB40((int)this->field24, index, item, 1);
    typedef int (CXTPControls::*PMF)(int);
    PMF pmf = *(PMF*)(*(int*)this + 0x68);
    (this->*pmf)(item);
    return item;
}
