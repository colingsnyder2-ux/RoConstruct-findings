// from server: 93% by atomic.potato
extern "C" int __stdcall func_0080c980(void*, void*, void*);

struct CXTPDockingPaneKeyboardHook
{
    int f(void*);
};

int CXTPDockingPaneKeyboardHook::f(void* arg)
{
    int value = 0;
    return func_0080c980((char*)this + 8, arg, &value) ? value : 0;
}
