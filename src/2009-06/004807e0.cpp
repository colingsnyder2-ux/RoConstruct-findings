// roc 2009-06 004807e0  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004807e0
//
// 004807e0  51                   push ecx
// 004807e1  56                   push esi
// 004807e2  c744240400000000     mov dword ptr [esp + 4], 0
// 004807ea  e8c18dfdff           call 0x4595b0
// 004807ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004807f3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004807f7  83ec10               sub esp, 0x10
// 004807fa  8bd4                 mov edx, esp
// 004807fc  890a                 mov dword ptr [edx], ecx
// 004807fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00480802  894a04               mov dword ptr [edx + 4], ecx
// 00480805  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00480809  894a08               mov dword ptr [edx + 8], ecx
// 0048080c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00480810  894a0c               mov dword ptr [edx + 0xc], ecx
// 00480813  56                   push esi
// 00480814  8bc8                 mov ecx, eax
// 00480816  e8d5f7ffff           call 0x47fff0
// 0048081b  8bc6                 mov eax, esi
// 0048081d  5e                   pop esi
// 0048081e  59                   pop ecx
// 0048081f  c21400               ret 0x14
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE?AURet@2@UArg@2@@Z)

namespace ns_ROCX000000 {
struct Ret
{
    Ret(const Ret &);
    ~Ret();
    void *p;
};

struct Arg
{
    int f0, f1, f2, f3;
};

struct Impl
{
    Ret g(Arg arg);
};

struct Getter { static Impl *get(); };

struct S
{
    Ret f(Arg arg);
};

Ret S::f(Arg arg)
{
    Impl *impl = Getter::get();
    return impl->g(arg);
}
}
