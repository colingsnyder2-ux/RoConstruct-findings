// from server: 96% by atomic.potato
extern "C" void __cdecl G1_func_00910180(void*, int);
extern "C" void __cdecl G1_func_00982114(void*);

struct S
{
    void __cdecl f(void*, int);
};

void __cdecl S::f(void* p, int value)
{
    if (p)
    {
        G1_func_00910180(p, *(int*)((char*)p + 12));
        G1_func_00982114(p);
    }
}
