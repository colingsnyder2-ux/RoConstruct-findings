// from server: 90% by atomic.potato
struct S
{
    int a;
    int b;
    int pad[4];
    int c;
    int d;
    void f();
};

void S::f()
{
    a = 0x9c0be4;
    b = 0x9c0bdc;
    c = 0x9c0bd0;
    d = 0x9c0bc8;
}
