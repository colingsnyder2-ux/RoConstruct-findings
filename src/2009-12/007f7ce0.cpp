// from server: 64% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    while (*(int*)((char*)this + 0x64) > 0)
    {
        int* p = *(int**)((char*)this + 0x60);
        int* v = *(int**)(*p);
        int (__thiscall *fn)(int*, int) =
            (int (__thiscall *)(int*, int))(*(int**)(v) + 0xb8);
        fn(v, 0);
    }
}
