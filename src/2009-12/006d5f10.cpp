// from server: 56% by atomic.potato
extern "C" void *string_constructor(void *, const char *);

struct S
{
    S *f(const char *);
};

S *S::f(const char *value)
{
    string_constructor(this, value);
    return this;
}
