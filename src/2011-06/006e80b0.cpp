// from server: 69% by atomic.potato
struct S
{
    int pad0;
    int *p10;
    int pad1;
    int *p20;
    int *p30;
    int pad2[31];
    int value90;

    void f();
};

void S::f()
{
    int value = value90;
    *p10 = value;
    *p20 = value;
    *p30 = value - value;
}
