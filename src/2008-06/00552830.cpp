// from server: 51% by atomic.potato
struct S_func_0071f210 {
    int m_x;
    int f();
};

struct S_func_00442cd0 {
    char pad0[4];
    int m_x;
    int f();
};

struct S_552860 {
    int f(int a, int b);
};

struct S_552830 {
    char pad0[4];
    int f(int a, int b);
};

int S_552830::f(int a, int b)
{
    S_func_0071f210* p1 = (S_func_0071f210*)b;
    int v1 = p1->f();
    S_func_00442cd0* p2 = (S_func_00442cd0*)b;
    int v2 = p2->f();
    S_552860* p3 = (S_552860*)this;
    return p3->f(a, v1 + v2);
}
