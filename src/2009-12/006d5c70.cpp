// from server: 56% by atomic.potato
struct S
{
    S *f(const char *);
};

extern "C" S *basic_string_ctor(S *, const char *);

S *S::f(const char *value)
{
    S *result = this;
    basic_string_ctor(result, value);
    return result;
}
