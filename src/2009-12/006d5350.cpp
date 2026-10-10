// from server: 66% by atomic.potato
extern "C" void basic_string_ctor(void *, const char *);

struct S
{
    S(const char *);
};

S::S(const char *unused)
{
    basic_string_ctor(this, "WeldCursor");
}
