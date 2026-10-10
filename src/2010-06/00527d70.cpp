// from server: 45% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    S *p = this;
    ++p;
    *(int *)p = 0x00a1e9f0;
}
