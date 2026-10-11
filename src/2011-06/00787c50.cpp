// from server: 87% by atomic.potato
typedef int (__cdecl *FunctionType)(int);
typedef int (__thiscall *MemberFunctionType)(void *, int);

extern "C" int __cdecl Function_0080bbc2(int);
extern "C" MemberFunctionType GlobalFunction_00a40a50;

struct TToolVerb
{
    void *field_0c;
    int f();
};

int TToolVerb::f()
{
    int value;
    void *object = field_0c;
    object = *(void **)((char *)object + 0xacc);
    value = *(int *)((char *)object + 0x188);
    if (value == 0)
        return 0;
    value = Function_0080bbc2(value);
    return GlobalFunction_00a40a50((void *)0x00c908e4, value);
}
