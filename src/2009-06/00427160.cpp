// from server: 60% by why2
struct S {
    void* field0;
    void f();
};

extern void G1_func_00718fa8();

void S::f()
{
    void* p = field0;
    if (p != 0)
        G1_func_00718fa8();
}
