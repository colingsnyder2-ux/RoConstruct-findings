// from server: 39% by atomic.potato
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

extern "C" int* __cdecl f_00598de0();

extern "C" void f_005f17a0(int*, int*);

struct SurfaceDescriptor
{
    void f(int*, int*, int*);
};

void SurfaceDescriptor::f(int* p1, int* p2, int* p3)
{
    int* p = p1 ? p1 - 5 : 0;
    int* q = f_00598de0();
    f_005f17a0(q + 4, p2);
}
