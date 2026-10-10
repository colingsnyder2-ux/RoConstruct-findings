// from server: 93% by atomic.potato
extern "C" int __stdcall sub_721410(void *, void *, void *);

struct CXTPDockingPaneKeyboardHook
{
    int f(void *);
};

int CXTPDockingPaneKeyboardHook::f(void *p)
{
    int result = 0;
    return sub_721410((char *)this + 8, p, &result) ? result : 0;
}
