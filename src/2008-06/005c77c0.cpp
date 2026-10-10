// from server: 68% by atomic.potato
struct TypeInfo;
typedef int (__cdecl *CompareTypeInfo)(const TypeInfo&, const TypeInfo&);
typedef void (__thiscall *ProcessTypeInfo)(int);
typedef void (__thiscall *InvokeTypeInfo)(int, int);

extern "C" int __cdecl sub_6A1DE2(int);
extern CompareTypeInfo g_compareTypeInfo;
extern int g_typeInfoObject;

struct TToolVerb
{
    int f();
    int pad0[3];
    int value;
};

int TToolVerb::f()
{
    int object = *(int *)(*(int *)((char *)this + 0x0c) + 0x204);
    int value = *(int *)(object + 0x3b0);
    if (value)
    {
        value = sub_6A1DE2(value);
        g_compareTypeInfo(*(TypeInfo *)value, *(TypeInfo *)g_typeInfoObject);
    }
    return value;
}
