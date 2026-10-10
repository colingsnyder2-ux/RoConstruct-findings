// from server: 37% by atomic.potato
struct S
{
    char pad10[16];
    int *p10;
    char pad20[12];
    int *p20;
    char pad30[12];
    int *p30;
    char pad90[92];
    int value;

    void f();
};

void S::f()
{
    *p10 = value;
    *p20 = value;
    *p30 = value - value;
}
