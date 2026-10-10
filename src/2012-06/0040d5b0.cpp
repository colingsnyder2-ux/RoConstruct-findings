// from server: 83% by atomic.potato
struct S
{
    void f();
    int a;
    int b;
    int c;
    int d;
    int e;
    int g;
};

void S::f()
{
    a = 0xb43fec;
    b = 0xb43fe4;
    e = 0xb43fd8;
    d = 0xb43fcc;
}
