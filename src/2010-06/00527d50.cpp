// from server: 36% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    ((int*)this)[1] = 0xa1e9e0;
}
