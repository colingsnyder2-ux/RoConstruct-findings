// from server: 76% by atomic.potato
extern "C" void sub_0097cd7e(void *);
extern "C" void sub_008a1dc0(void *);

struct S
{
    int f();
};

int S::f()
{
    sub_0097cd7e(this);
    *(int *)this = 0xA71D64;
    sub_008a1dc0((char *)this + 0x20);
    *(int *)((char *)this + 0x34) = 0;
    *(int *)((char *)this + 0x38) = 0;
    return (int)this;
}
