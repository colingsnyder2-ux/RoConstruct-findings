// from server: 50% by atomic.potato
struct S
{
    int f(const char *p);
};

extern "C" void __stdcall string_copy(void *, const void *);

int S::f(const char *p)
{
    void *q = (char *)this + 4;
    string_copy(q, p);
    return (int)this;
}
