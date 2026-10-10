// from server: 55% by atomic.potato
typedef unsigned int size_t;

extern "C" void *basic_string_ctor(void *, const char *);

struct S
{
    int f(void *);
};

int S::f(void *p)
{
    basic_string_ctor((char *)this + 8, "MaterialCursor");
    return (int)p;
}
