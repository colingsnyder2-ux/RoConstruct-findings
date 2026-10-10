// from server: 85% by atomic.potato
extern "C" void CallTarget(void *, void *);

struct S
{
    int f(void *, void *);
};

int S::f(void *, void *arg)
{
    CallTarget((char *)this + 0x128, arg);
    return 0;
}
