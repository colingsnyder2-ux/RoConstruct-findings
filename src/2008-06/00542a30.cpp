// from server: 37% by atomic.potato
struct S
{
    int f();
};

extern "C" void target(void *);

int S::f()
{
    target((char *)this + 8);
    return 0;
}
