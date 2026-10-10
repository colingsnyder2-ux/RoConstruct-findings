// from server: 91% by atomic.potato
extern "C" int __stdcall sub_008d0360(void *, int, int *);

struct CXTPMenuBarMDIMenus
{
    int f(int);
};

int CXTPMenuBarMDIMenus::f(int value)
{
    int result = sub_008d0360((char *)this + 0x20, value, &value);
    return result ? 0 : value;
}
