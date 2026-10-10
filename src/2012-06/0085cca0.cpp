// from server: 53% by atomic.potato
struct S
{
    struct A
    {
        int pad0[5];
        int value;
        int pad1[3];
        int field24;
    };

    A* p;
    void f();
};

extern "C" void func_0097d570(S::A*, int);

void S::f()
{
    A* a = p;
    a->field24 = 0;
    int value = a->value;
    a->value = value;
    func_0097d570(a, 1);
}
