// from server: 78% by atomic.potato
extern "C" void fn_00926442(void *);
extern "C" void fn_00865ea0(void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    fn_00926442(this);
    *(void **)this = (void *)0x9fea5c;
    fn_00865ea0((char *)this + 0x20);
    *(int *)((char *)this + 0x38) = value;
    *(int *)((char *)this + 0x34) = -1;
    return (int)this;
}
