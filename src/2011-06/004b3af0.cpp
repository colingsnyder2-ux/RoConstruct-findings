// from server: 48% by atomic.potato
struct S
{
    void __stdcall f(void*, unsigned int);
};

typedef void (__thiscall *Fn)(S*, void*, unsigned int);

void __stdcall S::f(void* p, unsigned int value)
{
    if (value == 4)
    {
        *(unsigned int*)p = 0x00c1d9e0;
        ((unsigned char*)p)[4] = 0;
        ((unsigned char*)p)[5] = 0;
    }
    else
    {
        ((Fn)0x004b3790)(this, p, value);
    }
}
