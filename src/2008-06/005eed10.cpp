// from server: 62% by atomic.potato
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}

extern "C" int* __cdecl f_00598de0(int*);

extern "C" void __cdecl f_005f17a0(int*, int, int);

struct SurfaceDescriptor {
    void f(void*, int, int);
};

void SurfaceDescriptor::f(void* p, int a, int b)
{
    int* x;
    if (p)
        x = (int*)((char*)p - 20);
    else
        x = 0;
    x = f_00598de0(x);
    f_005f17a0(x + 2, a, b);
}
