// from server: 73% by atomic.potato
extern "C" void sub_00a99584();
extern "C" void sub_009e2e60(void *, int);

struct S
{
    S *f();
};

S *S::f()
{
    sub_00a99584();
    sub_009e2e60((char *)this + 0x20, 10);
    *(int *)this = 0x00c1711c;
    *(int *)((char *)this + 0x3c) = 0;
    *(int *)((char *)this + 0x40) = 0;
    *(int *)((char *)this + 0x44) = 1;
    return this;
}
