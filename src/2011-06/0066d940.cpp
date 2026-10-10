// from server: 88% by atomic.potato
extern "C" int (__thiscall *type_info_equal)(const void *, const void *);

struct S
{
    int f();
};

int S::f()
{
    const void *p = *(const void **)this;
    p = *(const void **)((const char *)p + 8);
    return type_info_equal((const void *)0xc2aff8, p);
}
