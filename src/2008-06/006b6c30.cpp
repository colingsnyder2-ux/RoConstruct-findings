// from server: 85% by atomic.potato
extern "C" void __stdcall sub_70e320(void *, int, int);

struct CXTPCommandBarList
{
    int f(int);
};

int CXTPCommandBarList::f(int value)
{
    sub_70e320((char *)this + 0x24, *(int *)((char *)this + 0x2c), value);
    return value;
}
