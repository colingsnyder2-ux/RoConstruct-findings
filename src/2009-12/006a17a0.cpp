// from server: 88% by atomic.potato
extern "C" int (__thiscall *type_info_equal)(void *, const void *);

struct S
{
    int f();
};

int S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return type_info_equal((void *)0x00b1d6b0, q);
}
