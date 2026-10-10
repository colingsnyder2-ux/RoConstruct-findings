// from server: 85% by atomic.potato
struct S
{
    int f();
};

typedef int (__cdecl *CallType)(int);
typedef int (__thiscall *MemberCallType)(void *, int);

extern "C" int __cdecl call_007f5286(int);
extern "C" int __cdecl call_0098b768(void *, int);

int S::f()
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
