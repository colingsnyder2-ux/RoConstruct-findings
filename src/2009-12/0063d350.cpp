// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    ((int *)this)[0] = 0x9cc404;
    ((int *)this)[1] = 0x9cc3f8;
    ((int *)this)[6] = 0x9cc3ec;
    ((int *)this)[7] = 0x9cc3e4;
}
