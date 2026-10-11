// from server: 51% by colin




struct S_func_005c72e0 {
    void* f(int a1);
};

struct S_func_005534a0 {
    void* f(int a1, int a2);
};

struct S_func_00553480 {
    void* f(void* a1);
};

struct S_func_00553340 {
    void* f(int a1, int a2, unsigned char a3);
};

void* S_func_00553340::f(int a1, int a2, unsigned char a3)
{
    S_func_005c72e0 c;
    void* r1 = c.f(a3);
    S_func_005534a0 d;
    void* r2 = d.f(a2, (int)r1);
    void* v = *(void**)r2;
    S_func_00553480 e;
    e.f(v);
    return (void*)a1;
}
