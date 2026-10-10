// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x00b4487c;
    *((int *)this + 1) = 0x00b44874;
    *((int *)this + 6) = 0x00b44868;
    *((int *)this + 7) = 0x00b4485c;
}
