// from server: 39% by colin
extern "C" void* __cdecl sub_418690();
extern "C" void __cdecl sub_630D23();

struct ClassDescriptor {
    void __thiscall construct(void*);
};

extern ClassDescriptor g_classDescriptor;

extern unsigned char g_initFlag;
extern void* g_typeInfo;

void __cdecl sub_48D750()
{
    if ((g_initFlag & 1) == 0) {
        g_initFlag |= 1;
        g_classDescriptor.construct(sub_418690());
        sub_630D23();
    }
}
