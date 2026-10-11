// from server: 42% by atomic.potato
struct S
{
    void f(void *, void *);
};

extern "C" void * call_00543580(S *, void *, void *);
extern "C" void call_0054e320(void *, void *);

void S::f(void *a, void *b)
{
    call_0054e320(a, call_00543580(this, b, this));
}
