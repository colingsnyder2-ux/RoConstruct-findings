// from server: 63% by atomic.potato
extern "C" void basic_string_copy(void *, const void *);

struct S_func_0068cdd0 {
    char pad0[4];
    void *f(void *);
};

void *S_func_0068cdd0::f(void *source)
{
    basic_string_copy((char *)this + 4, source);
    return source;
}
