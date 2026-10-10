// from server: 80% by atomic.potato
struct TTypeInfo
{
    bool operator==(const TTypeInfo& other) const;
};

extern TTypeInfo* GetTypeInfo(void* value);
extern TTypeInfo* g_typeInfo;

struct S
{
    int f();
    void* field0c;
};

int S::f()
{
    void* value = *(void**)((char*)field0c + 0x204);
    void* object = *(void**)((char*)value + 0x3b0);
    if (!object)
        return 0;
    TTypeInfo* info = GetTypeInfo(object);
    return *info == *g_typeInfo;
}
