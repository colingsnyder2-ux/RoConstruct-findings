// from server: 74% by atomic.potato
struct S
{
    void *f(void *type);
};

extern "C" int __stdcall type_info_equal(void *left, void *right);

void *S::f(void *type)
{
    if (type_info_equal(type, (void *)0x00de1480))
        return (void *)((char *)this + 0x10);
    return 0;
}
