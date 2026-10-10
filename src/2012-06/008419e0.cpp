// from server: 81% by atomic.potato
struct S
{
    void *f(void *type_info_arg);
};

extern "C" int __stdcall type_info_equal(void *a, void *b);
extern void *g_type_info;

void *S::f(void *type_info_arg)
{
    if (type_info_equal(type_info_arg, g_type_info))
        return (char *)this + 16;
    return 0;
}
