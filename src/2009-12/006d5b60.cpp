// from server: 58% by atomic.potato
extern "C" void __stdcall basic_string_ctor(void *, const char *);

struct S
{
    S *f(void *);
};

S *S::f(void *p)
{
    basic_string_ctor((char *)p, "MotorCursor");
    return this;
}
