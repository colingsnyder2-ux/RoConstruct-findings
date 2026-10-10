// from server: 63% by atomic.potato
extern "C" void basic_string_copy(void *, const void *);

struct S
{
    int f(void *);
};

int S::f(void *source)
{
    char buffer[4];
    buffer[0] = 0;
    basic_string_copy((char *)this + 0x3c, source);
    return (int)source;
}
