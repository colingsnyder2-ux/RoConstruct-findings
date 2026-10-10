// from server: 71% by atomic.potato
extern "C" int sub_007bb6c0(void*, int*);

struct CXTPDockingPaneKeyboardHook
{
    int f(int);
};

int CXTPDockingPaneKeyboardHook::f(int value)
{
    int result = 0;
    if (sub_007bb6c0((char*)this + 8, &result))
        return result;
    return 0;
}
