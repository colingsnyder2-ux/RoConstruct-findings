// from server: 6% by atomic.potato
struct S {
    void f();
};

void S::f()
{
    int x = 0;
    x = x;
}
