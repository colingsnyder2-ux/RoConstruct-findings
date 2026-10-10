// from server: 13% by atomic.potato
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}

struct S_func_005eecc0 {
    void f(int* a1, int a2, int a3);
};

void S_func_005eecc0::f(int* a1, int a2, int a3)
{
    S_func_00598de0* p = 0;
    if (a1)
        p = (S_func_00598de0*)((char*)a1 - 20);
    p->f();
}
