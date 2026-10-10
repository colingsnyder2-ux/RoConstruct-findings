// from server: 86% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo& other) const;
};

struct S
{
    int f();
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" void sub_9EA8D8(void*, int);

int S::f()
{
    int a = *(int*)((char*)this + 0x0c);
    int b = *(int*)((char*)a + 0xaa0);
    int c = *(int*)((char*)b + 0x1b4);
    if (c)
    {
        int d = sub_7A93C6(c);
        sub_9EA8D8((void*)0xbb78c0, d);
    }
    return 0;
}
