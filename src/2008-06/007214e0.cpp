// from server: 81% by atomic.potato
extern "C" int __stdcall sub_721410(void *, void *, void *);

struct CXTPMenuBarMDIMenus
{
    int f(int);
};

int CXTPMenuBarMDIMenus::f(int value)
{
    int result = sub_721410((char *)this + 0x20, &value, &value);
    result = -result;
    result = result ? -1 : 0;
    return result & value;
}
