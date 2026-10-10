// from server: 29% by atomic.potato
struct S
{
    void f();
};

void g();

void S::f()
{
    g();
}
