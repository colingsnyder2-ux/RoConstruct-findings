// from server: 62% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo&) const;
};

extern "C" TypeInfo* __cdecl sub_0080bbc2(TypeInfo*);
extern "C" void sub_00a40a50(void*, TypeInfo*);

struct TToolVerb
{
    void* field_0c;
    int field_10[159];
    void* field_28c;

    void f();
};

void TToolVerb::f()
{
    TypeInfo* value = *(TypeInfo**)((char*)field_0c + 0xacc);
    value = *(TypeInfo**)((char*)value + 0x188);
    if (value)
    {
        value = sub_0080bbc2(value);
        sub_00a40a50((void*)0xc907a4, value);
    }
}
