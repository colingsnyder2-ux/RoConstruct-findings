// from server: 44% by atomic.potato
extern "C" void std_string_copy(void *, const void *);
extern "C" void function_at_b22644(void *, void *);

struct S
{
    int __cdecl f(void *);
};

int S::f(void *arg)
{
    void *value;
    void *temporary[7];
    void *source;

    source = *(void **)arg;
    value = *(void **)((char *)source + 0x20);
    temporary[0] = 0;
    std_string_copy((void *)((char *)temporary + 4), value);
    function_at_b22644((void *)((char *)source + 4), temporary);
    return 0;
}
