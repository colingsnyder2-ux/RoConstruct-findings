// from server: 68% by atomic.potato
struct S
{
    void *value;
    int f();
};

extern "C" int type_info_equal(void *, const void *);

int S::f()
{
    return type_info_equal((void *)0x00b13cf8, (char *)value + 8);
}
