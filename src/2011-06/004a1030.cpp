// from server: 58% by atomic.potato
struct S
{
    long f(void **result, void *value);
};

long S::f(void **result, void *value)
{
    if (value == 0)
        return (long)0x80004003;

    void *object = *(void **)((char *)value + 12);
    *result = object;

    if (object == 0)
        return (long)0x80040209;

    void **vtable = *(void ***)object;
    typedef void (__thiscall *ReleaseFunction)(void *);
    ((ReleaseFunction)vtable[1])(object);
    return 0;
}
