// from server: 28% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct S
{
    int f(S *, const void *);
};

int S::f(S *source, const void *value)
{
    *(void **)this = *(void **)source;
    std_string_copy((char *)this + 4, value);
    return (int)this;
}
