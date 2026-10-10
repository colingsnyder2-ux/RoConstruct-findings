// from server: 41% by atomic.potato
typedef int (__thiscall *Callback)(void *, void *, int);

extern "C" void __stdcall InvokeCallback(void *, void *, int);

struct S
{
    int f(int);
};

int S::f(int value)
{
    InvokeCallback((char *)this + 0x30, 0, value);
    return (int)this;
}
