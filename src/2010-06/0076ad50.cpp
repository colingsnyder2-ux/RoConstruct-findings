// from server: 93% by atomic.potato
struct S
{
    int f(void *value);
};

extern "C" void __stdcall fn(void *, void *);

int S::f(void *value)
{
    fn((char *)this + 0xb0, value);
    return (int)value;
}
