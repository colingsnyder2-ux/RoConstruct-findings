// from server: 48% by atomic.potato
struct S
{
    int pad0[4];
    int* p10;
    int pad1[3];
    int* p20;
    int pad2[3];
    int* p30;
    int pad3[3];
    int value;

    void f();
};

void S::f()
{
    *p10 = value;
    *p20 = value;
    *p30 = value - value;
}
