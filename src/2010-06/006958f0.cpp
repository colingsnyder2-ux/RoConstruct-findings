// from server: 72% by atomic.potato
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
    a = 0xa3e5ac;
    b = 0xa3e5a4;
    c[2] = 0xa3e598;
    c[3] = 0xa3e58c;
    e[3] = 0xa3e574;
}
