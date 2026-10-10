// from server: 34% by atomic.potato
struct S
{
    void f();
};

extern "C" void callee(void *);

void S::f()
{
    callee(this);
}
