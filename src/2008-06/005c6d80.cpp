// from server: 84% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo& other) const;
};

extern "C" TypeInfo* __cdecl sub_006a1de2(int value);
extern TypeInfo* g_typeInfo;

struct S
{
    int f();
};

int S::f()
{
    int* p = *(int**)((char*)this + 12);
    int* q = *(int**)((char*)p + 516);
    int value = *(int*)((char*)q + 944);
    if (!value)
        return 0;
    TypeInfo* result = sub_006a1de2(value);
    return *result == *g_typeInfo;
}
