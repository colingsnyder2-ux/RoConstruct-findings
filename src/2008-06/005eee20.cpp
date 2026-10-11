// from server: 70% by atomic.potato
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

struct SurfaceDescriptor
{
    int f(void* a, int b, int c);
};

extern "C" int* sub_00598de0(S_func_00598de0*);

extern "C" int __stdcall sub_005f17a0(int*, int);

int SurfaceDescriptor::f(void* a, int b, int c)
{
    S_func_00598de0* p = (S_func_00598de0*)a;
    int* q = sub_00598de0(p ? (S_func_00598de0*)((char*)p - 20) : 0);
    return sub_005f17a0((int*)((char*)q + 24), b);
}
