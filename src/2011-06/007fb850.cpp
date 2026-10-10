// from server: 74% by atomic.potato
struct S
{
    void *f(void *);
};

extern "C" int __stdcall type_info_equal(void *, void *);

void *S::f(void *value)
{
    if (type_info_equal(value, (void *)0xc951d0))
        return (char *)this + 0x10;
    return 0;
}
