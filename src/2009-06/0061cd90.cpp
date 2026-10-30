// roc 2009-06 0061cd90  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061cd90
//
// 0061cd90  51                   push ecx
// 0061cd91  56                   push esi
// 0061cd92  c744240400000000     mov dword ptr [esp + 4], 0
// 0061cd9a  e89185feff           call 0x605330
// 0061cd9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061cda3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061cda7  83ec10               sub esp, 0x10
// 0061cdaa  8bd4                 mov edx, esp
// 0061cdac  890a                 mov dword ptr [edx], ecx
// 0061cdae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061cdb2  894a04               mov dword ptr [edx + 4], ecx
// 0061cdb5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061cdb9  894a08               mov dword ptr [edx + 8], ecx
// 0061cdbc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061cdc0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0061cdc3  56                   push esi
// 0061cdc4  8bc8                 mov ecx, eax
// 0061cdc6  e865e6ffff           call 0x61b430
// 0061cdcb  8bc6                 mov eax, esi
// 0061cdcd  5e                   pop esi
// 0061cdce  59                   pop ecx
// 0061cdcf  c21400               ret 0x14
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
