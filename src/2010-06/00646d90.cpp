// from server: 65% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo& other) const;
};

extern "C" TypeInfo* __cdecl sub_7a93c6(int value);
extern "C" void __cdecl sub_9ea8d8(void* object, TypeInfo* value);

struct S
{
    void* field_0c;
    int f();
};

int S::f()
{
    void* a = field_0c;
    void* b = *(void**)((char*)a + 0xaa0);
    int value = *(int*)((char*)b + 0x1b4);
    if (!value)
        return 0;
    TypeInfo* type = sub_7a93c6(value);
    sub_9ea8d8((void*)0xbb6a7c, type);
    return 0;
}
