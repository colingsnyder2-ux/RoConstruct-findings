// from server: 48% by atomic.potato
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
    a = 0;
    b = -1;
    d = 0;
    e = 0;
    c = 0;
}
