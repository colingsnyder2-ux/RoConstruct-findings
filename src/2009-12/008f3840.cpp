// from server: 73% by atomic.potato
extern "C" long __stdcall CallWindowProcA(long, long, unsigned int, long);

struct CXTWndHook_func_008f3840
{
    void *vtable;
    long window;
    long message;
    CXTWndHook_func_008f3840 *hook;
    long f(long, long);
};

long CXTWndHook_func_008f3840::f(long a, long b)
{
    if (hook)
        return ((long (__thiscall *)(CXTWndHook_func_008f3840 *))(*(long **)hook)[8])(hook);
    return CallWindowProcA(window, message, a, b);
}
