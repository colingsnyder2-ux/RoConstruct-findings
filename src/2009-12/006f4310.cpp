// from server: 74% by atomic.potato
struct S
{
    int a;
    int b;
    int c[4];
    int d;
    int e[28];

    void f();
};

void S::f()
{
    a = 0x9dc734;
    b = 0x9dc72c;
    c[4] = 0x9dc720;
    d = 0x9dc718;
    e[8] = 0x9dc710;
}
