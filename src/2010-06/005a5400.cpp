// from server: 73% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl type_info_equal(void *, void *);

int S::f()
{
    void *p;
    p = *(void **)this;
    p = *(void **)((char *)p + 8);
    return type_info_equal((void *)0xb87c30, p);
}
