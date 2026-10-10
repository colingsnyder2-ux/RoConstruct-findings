// from server: 53% by atomic.potato
extern "C" void __cdecl sub_5f95c0(const char *, ...);

struct S
{
    void f(const char *, const char *, const char *, const char *, const char *, const char *);
};

void S::f(const char *a, const char *b, const char *c, const char *d, const char *e, const char *f)
{
    sub_5f95c0(f, e, d, c, b, a, this);
}
