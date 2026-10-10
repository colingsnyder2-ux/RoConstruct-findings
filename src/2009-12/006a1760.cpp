// from server: 64% by atomic.potato
struct S
{
    int f();
};

extern "C" int __stdcall type_info_equal(void *, const void *);
extern void *g_type_info;

int S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return type_info_equal(g_type_info, q);
}
