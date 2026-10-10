// from server: 28% by colin
struct S {
    int f(int, int, int, int);
};

extern "C" void* __stdcall malloc(unsigned int);
extern "C" void __stdcall free_string(void*);

int S::f(int a, int b, int c, int d)
{
    void* p = malloc(0x148);
    if (p) {
        int r = ((int (__thiscall*)(void*, int, int, int, int))0x6235b0)(p, a, b, c, d);
        ((void (__thiscall*)(void*, int))0x6233c0)(this, r);
    } else {
        ((void (__thiscall*)(void*, int))0x6233c0)(this, 0);
    }
    free_string(0);
    return (int)this;
}
