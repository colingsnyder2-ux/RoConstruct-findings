// from server: 38% by colin
struct EnumDescriptor { };

struct EnumRegistrarBase {
    void dummy();
};

extern EnumRegistrarBase registrar;

struct EnumDesc : EnumDescriptor {
    EnumDesc();
};

extern int g_enumInitFlag;
extern EnumDesc g_enumDesc;

EnumDesc::EnumDesc()
{
    if (!(g_enumInitFlag & 1)) {
        g_enumInitFlag |= 1;
        registrar.dummy();
        g_enumDesc.~EnumDesc();
    }
}
