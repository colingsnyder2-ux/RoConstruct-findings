// from server: 46% by colin
struct EnumDescriptor {
    void dummy();
};

struct EnumRegistrar {
    EnumDescriptor registrar;
};

struct EnumDesc {
    static unsigned int initialized;
    static EnumRegistrar reg;
    EnumDesc();
};

unsigned int EnumDesc::initialized = 0;
EnumRegistrar EnumDesc::reg;

extern "C" void __cdecl sub_630d23(void*);

void __cdecl sub_446630();

EnumDesc::EnumDesc()
{
    if (!(initialized & 1)) {
        initialized |= 1;
        reg.registrar.dummy();
        sub_630d23((void*)0x777cf0);
    }
}
