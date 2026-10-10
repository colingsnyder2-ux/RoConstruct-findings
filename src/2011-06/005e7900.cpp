// from server: 74% by atomic.potato
extern "C" int __stdcall type_info_equal(const void *, const void *);
extern "C" const void *g_type_info;

struct S
{
    void *f(void *);
};

void *S::f(void *value)
{
    if (type_info_equal((const void *)0xC45B90, value))
        return (char *)this + 16;
    return 0;
}
