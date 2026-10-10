// from server: 74% by atomic.potato
struct S
{
    void *f(void *);
};

extern "C" int __stdcall type_info_equal(void *, void *);

void *S::f(void *p)
{
    if (type_info_equal(p, (void *)0x00d65ed8))
        return (char *)this + 0x10;
    return 0;
}
