// from server: 57% by atomic.potato
struct S_func_00598de0
{
    char pad0[500];
    int m_x;
    int* f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}

extern "C" int* __cdecl call_005f17a0(int*, int, int);

struct SurfaceDescriptor
{
    int* f(int* p, int a, int b);
};

int* SurfaceDescriptor::f(int* p, int a, int b)
{
    S_func_00598de0* q;
    if (p)
        q = (S_func_00598de0*)((char*)p - 20);
    else
        q = 0;
    int* r = q->f();
    return call_005f17a0(r + 8, a, b);
}
