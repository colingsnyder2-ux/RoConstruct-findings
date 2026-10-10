// from server: 75% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" TypeInfo* __cdecl sub_006a1de2(int value);
extern TypeInfo* const g_typeInfo;

struct S
{
    int f();
    int field_0c;
};

int S::f()
{
    int* p = (int*)field_0c;
    int value = ((int**)p)[0x204 / 4][0x3b0 / 4];
    if (!value)
        return 0;
    TypeInfo* t = sub_006a1de2(value);
    return t->operator==(*g_typeInfo) ? 1 : 0;
}
