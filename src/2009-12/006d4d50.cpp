// from server: 79% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl sub_98b768(int);

int S::f()
{
    int value = *(int *)((char *)this + 12);
    value = *(int *)((char *)value + 0xA90);
    value = *(int *)((char *)value + 0x1B4);
    if (value)
    {
        value = sub_7f5286(value);
        sub_98b768(value);
    }
    return 0;
}
