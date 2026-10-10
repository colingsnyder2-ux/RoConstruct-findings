// from server: 48% by atomic.potato
struct S
{
    char pad0[16];
    int *a;
    char pad1[12];
    int *b;
    char pad2[12];
    int *c;
    char pad3[20];
    int value;

    void f();
};

void S::f()
{
    *a = value;
    *b = value;
    *c = value - value;
}
