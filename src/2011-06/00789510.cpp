// from server: 69% by atomic.potato
typedef int bool32;

struct TypeInfo
{
    bool32 operator==(const TypeInfo& other) const;
};

extern "C" TypeInfo* __cdecl Function_0080BBC2(int value);
extern "C" bool32 __cdecl Function_00A40A50(int, TypeInfo*);

struct TToolVerb
{
    void* field_0c;
    bool32 f();
};

bool32 TToolVerb::f()
{
    void* object = *(void**)((char*)field_0c + 0x0acc);
    int value = *(int*)((char*)object + 0x188);
    if (!value)
        return 0;
    TypeInfo* type = Function_0080BBC2(value);
    return Function_00A40A50(0, type);
}
