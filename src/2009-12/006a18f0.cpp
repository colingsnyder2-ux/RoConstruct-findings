// from server: 73% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl imported_type_info_compare(const void *, const void *);

S *g_object;

int S::f()
{
    int p = *(int *)this;
    int q = *(int *)(p + 8);
    return imported_type_info_compare((const void *)0x00b2b6f8, (const void *)q);
}
