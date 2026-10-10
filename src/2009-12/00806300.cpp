// from server: 85% by atomic.potato
extern "C" void __stdcall sub_86AC70(void *, int, int);

struct CXTPCommandBarList
{
    int f(int);
};

int CXTPCommandBarList::f(int value)
{
    sub_86AC70((char *)this + 0x24, *((int *)((char *)this + 0x2c)), value);
    return value;
}
