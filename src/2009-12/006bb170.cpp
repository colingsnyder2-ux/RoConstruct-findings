// from server: 65% by atomic.potato
struct S
{
    int a;
    int b;
    int c[4];
    int d;
    int e[27];
    int f();
};

int S::f()
{
    a = 0x9d66dc;
    b = 0x9d66d0;
    c[0] = 0x9d66c4;
    d = 0x9d66bc;
    e[22] = 0x9d66a4;
    return 0;
}
