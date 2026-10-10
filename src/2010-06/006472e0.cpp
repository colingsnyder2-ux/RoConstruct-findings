// from server: 82% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int __cdecl call_9EA8D8(int, int);

int S::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 0xAA0);
    int c = *(int *)((char *)b + 0x1B4);
    if (!c)
        return 0;
    return call_9EA8D8(0xBB6D0C, sub_7A93C6(c));
}
