// from server: 85% by atomic.potato
extern "C" int __cdecl sub_007f5286(int);
extern "C" int __cdecl imported_0098b768(void *, int);

struct S
{
    int *vtable;
    char pad0[8];
    void *owner;
    int f();
};

int S::f()
{
    int *p = *(int **)((char *)owner + 0xa90);
    int value = *(int *)((char *)p + 0x1b4);
    if (value)
    {
        value = sub_007f5286(value);
        return imported_0098b768((void *)0xb3f324, value);
    }
    return 0;
}
