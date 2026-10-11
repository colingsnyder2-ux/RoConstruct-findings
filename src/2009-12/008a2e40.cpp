// from server: 89% by atomic.potato
struct S
{
    struct VTable
    {
        int (__thiscall *GetSize)(S *);
        int (__thiscall *GetAt)(S *, int);
    };

    VTable *vtable;
    int f(int);
};

extern "C" void __declspec(noreturn) __cdecl sub_007f3b18(unsigned long);

int S::f(int index)
{
    if (index >= 0 && index < vtable->GetSize(this))
        return vtable->GetAt(this, index);

    sub_007f3b18(0x8002000b);
}
