// from server: 64% by atomic.potato
extern "C" void std_string_ctor(void *, const char *);

struct S
{
    void *f(void *);
};

void *S::f(void *p)
{
    std_string_ctor(p, "UniversalCursor");
    return p;
}
