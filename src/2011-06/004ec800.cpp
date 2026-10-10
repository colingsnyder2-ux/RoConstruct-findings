// from server: 78% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    unsigned char e;
    void f();
};

void S::f()
{
    a = 0;
    b = 0x800;
    c = 0;
    d = (int)((char *)this + 0x11);
    e = 1;
}
