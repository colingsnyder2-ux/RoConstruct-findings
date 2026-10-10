// from server: 91% by colin
// roc 2007-08 005e5c80  unit: seg_005e0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5c80

struct S_func_005e5c80
{
    char pad0[0x20];
    char field20[0x20];
    char field40[0x20];
    void func_005e5c80(int arg);
};

extern "C" int __stdcall sub_005e3f10(int a, void* b);

struct S_sub_005e3830
{
    char sub_005e3830(void* b);
};

struct StringAssign
{
    void assign(const char* s);
};

void S_func_005e5c80::func_005e5c80(int arg)
{
    if (sub_005e3f10(arg, field40) != 0)
    {
        if (((S_sub_005e3830*)this)->sub_005e3830(field40) != 0)
        {
            ((StringAssign*)field20)->assign((const char*)0x7acf38);
            return;
        }
    }
    ((StringAssign*)field20)->assign((const char*)0x7bd260);
}
