// from server: 74% by atomic.potato
extern "C" int __stdcall type_info_equal(const void *, const void *);

struct S
{
    int f();
};

int S::f()
{
    const void *p = *(const void **)this;
    const void *q = *(const void **)((const char *)p + 8);
    const void *r = (const void *)0x00c3c6f8;
    return type_info_equal(r, q);
}
