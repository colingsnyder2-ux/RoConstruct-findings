// from server: 94% by atomic.potato
extern "C" void __stdcall func_007f3e30();

struct S
{
    void f(int);
};

void S::f(int value)
{
    if (value == 0x28 || value == 0x26)
    {
        typedef void (__thiscall *Fn)(S *);
        Fn fn = (Fn)(*(unsigned long **)(*(unsigned long *)this + 0x16c));
        fn(this);
    }
    else
    {
        func_007f3e30();
    }
}
