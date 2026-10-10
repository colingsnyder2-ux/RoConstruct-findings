// from server: 66% by atomic.potato
extern "C" void __stdcall SetRectEmpty(void*);

struct S_func_00805820
{
    int (**vtable)();
    int f(int, int, int);
};

int S_func_00805820::f(int a, int b, int c)
{
    SetRectEmpty((char*)this + 0x13c);
    return ((int (__thiscall *)(S_func_00805820*, int, int, int))(*(int***)this + 0x178))(this, c, b, a);
}
