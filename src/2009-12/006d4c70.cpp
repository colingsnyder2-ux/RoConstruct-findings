// from server: 64% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct ToolVerb
{
    void* field0;
    void* field1;
    void* field2;
    void* field3;
    int f();
};

extern "C" TypeInfo* __cdecl type_info_compare(TypeInfo*, TypeInfo*);
extern "C" void global_call(void*, TypeInfo*);

ToolVerb* g_tool;
void* g_context;

int ToolVerb::f()
{
    TypeInfo* value = *(TypeInfo**)((char*)*(void**)((char*)this + 12) + 436);
    if (!value)
        return 0;
    TypeInfo* result = type_info_compare(value, 0);
    global_call(g_context, result);
    return 0;
}
