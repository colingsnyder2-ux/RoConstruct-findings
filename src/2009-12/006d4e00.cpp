// from server: 63% by atomic.potato
struct S
{
    int f(void *);
};

extern "C" void *basic_string_copy(void *, const void *);

int S::f(void *arg)
{
    void *source = arg;
    basic_string_copy((char *)this + 0x24, source);
    return (int)source;
}
