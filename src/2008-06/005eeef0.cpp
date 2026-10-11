// from server: 44% by atomic.potato
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}

struct S {
    int f(int*, int, int);
};

extern "C" int __cdecl call_005f17a0(int*, int, int);

int S::f(int* p, int a, int b)
{
    S_func_00598de0* q = 0;
    if (p)
        q = (S_func_00598de0*)((char*)p - 20);
    int* r = q->f();
    return call_005f17a0(r + 10, a, b);
}
