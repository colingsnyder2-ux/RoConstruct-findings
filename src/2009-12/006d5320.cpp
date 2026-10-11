// from server: 87% by atomic.potato
struct S
{
    char f();
};

extern "C" int __cdecl call_007f5286(int);
extern "C" char __cdecl call_0098b768(void *, int);

char S::f()
{
    int value = *(int *)((char *)*(int *)((char *)this + 12) + 0xA90);
    int result = *(int *)((char *)value + 0x1B4);

    if (result)
    {
        int converted = call_007f5286(result);
        return call_0098b768((void *)0xB3F284, converted);
    }

    return 0;
}
