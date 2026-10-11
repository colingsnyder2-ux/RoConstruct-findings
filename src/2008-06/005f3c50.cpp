// from server: 32% by colin
extern "C" int __stdcall func_005f5b70(void*, void*, int);
extern "C" int __stdcall func_00802370(void*);

struct S
{
    char pad_00[0x14];
    int* member_14;
    char pad_18[0x0c];
    int* member_24;
    char pad_28[0x1c];
    void* member_44;
    int f();
};

int S::f()
{
    int* p24 = member_24;
    int* p14 = member_14;
    int diff = *p24 - *p14;
    if (diff > 0)
    {
        func_005f5b70(&member_44, p14, diff);
    }
    if (member_44 != 0)
    {
        func_00802370(member_44);
    }
    return 0;
}
