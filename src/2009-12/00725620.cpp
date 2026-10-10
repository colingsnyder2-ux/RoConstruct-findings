// from server: 48% by atomic.potato
struct S_func_00725620
{
    int pad0[4];
    int *first;
    int pad1[3];
    int *second;
    int pad2[3];
    int *third;
    int pad3[3];
    int value;

    void f();
};

void S_func_00725620::f()
{
    *first = value;
    *second = value;
    *third = 0;
}
