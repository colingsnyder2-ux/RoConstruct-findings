// from server: 91% by atomic.potato
extern "C" int __stdcall sub_80c980(void *, void *, void *);

struct CXTPMenuBarMDIMenus
{
    int f(void *);
};

int CXTPMenuBarMDIMenus::f(void *value)
{
    return -sub_80c980((char *)this + 0x20, value, &value) & *(int *)&value;
}
