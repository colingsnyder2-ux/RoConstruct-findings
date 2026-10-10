// from server: 37% by atomic.potato
struct S
{
    char padding[16];
    int *p10;
    char padding2[12];
    int *p20;
    char padding3[12];
    int *p30;
    char padding4[92];
    int value;
    void f();
};

void S::f()
{
    *p10 = value;
    *p20 = value;
    *p30 = value - value;
}
