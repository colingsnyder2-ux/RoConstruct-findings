// from server: 54% by atomic.potato
extern "C" void sub_70e320(void *, void *);

struct S
{
    int f(void *);
    char pad20[0x20];
    void *field28;
    char pad2c[0x10];
    int field3c;
    char pad40[0x0c];
};

int S::f(void *record)
{
    sub_70e320((char *)this + 0x20, field28);
    if (field3c == 0)
    {
        *(void **)((char *)record + 0x4c) = field28;
        *(void **)((char *)record + 0x50) = this;
    }
    return (int)record;
}
