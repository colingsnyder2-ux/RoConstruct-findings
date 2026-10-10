// from server: 80% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int type_info_equal(void *, const void *);
extern void *g_type_info;
extern int g_object;

int S::f()
{
    int *a = *(int **)((char *)this + 12);
    int *b = *(int **)((char *)a + 0xAA0);
    int v = *(int *)((char *)b + 0x1B4);
    if (!v)
        return 0;
    return type_info_equal((void *)g_object, (const void *)sub_7A93C6(v));
}
