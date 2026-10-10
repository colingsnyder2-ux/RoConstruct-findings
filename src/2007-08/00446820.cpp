// from server: 34% by colin
struct EnumDescriptor
{
    void dummy();
};

struct EnumRegistrarBase
{
    void dummy();
};

extern "C" void __cdecl sub_418690();
extern "C" void __stdcall sub_570C00(void*);
extern "C" void __cdecl sub_630D23(void*);

struct EnumDesc
{
    void ctor();
};

void EnumDesc::ctor()
{
    static bool initialized = false;
    if (!initialized)
    {
        initialized = true;
        sub_418690();
        sub_570C00((void*)0x8bbb88);
        sub_630D23((void*)0x777ce0);
    }
}
