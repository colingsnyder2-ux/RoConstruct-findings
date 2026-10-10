// from server: 49% by atomic.potato
extern "C" void basic_string_ctor(void *, const char *);

struct S
{
    int f(void *);
};

int S::f(void *value)
{
    basic_string_ctor(value, "ArrowCursorDecalDrag");
    return (int)this;
}
