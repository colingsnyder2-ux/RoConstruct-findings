// from server: 64% by atomic.potato
extern "C" void __stdcall G1_func_0098de94(void *, void *, int);

struct S
{
    void *f(void *);
};

void *S::f(void *arg)
{
    void *result;
    G1_func_0098de94(arg, (char *)this + 32, 0);
    result = arg;
    return result;
}
