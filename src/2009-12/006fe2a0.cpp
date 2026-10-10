// from server: 77% by atomic.potato
struct S
{
    int a;
    int b;
    int pad1[4];
    int c;
    int d;
    int pad2[17];
    int e;
    void f();
};

void S::f()
{
    a = 0x9dd71c;
    b = 0x9dd714;
    c = 0x9dd708;
    d = 0x9dd700;
    e = 0x9dd6f8;
}
