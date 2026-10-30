// roc 2009-06 0061cd40  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061cd40
//
// 0061cd40  51                   push ecx
// 0061cd41  56                   push esi
// 0061cd42  c744240400000000     mov dword ptr [esp + 4], 0
// 0061cd4a  e851f2dfff           call 0x41bfa0
// 0061cd4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061cd53  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061cd57  83ec10               sub esp, 0x10
// 0061cd5a  8bd4                 mov edx, esp
// 0061cd5c  890a                 mov dword ptr [edx], ecx
// 0061cd5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061cd62  894a04               mov dword ptr [edx + 4], ecx
// 0061cd65  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061cd69  894a08               mov dword ptr [edx + 8], ecx
// 0061cd6c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061cd70  894a0c               mov dword ptr [edx + 0xc], ecx
// 0061cd73  56                   push esi
// 0061cd74  8bc8                 mov ecx, eax
// 0061cd76  e855e5ffff           call 0x61b2d0
// 0061cd7b  8bc6                 mov eax, esi
// 0061cd7d  5e                   pop esi
// 0061cd7e  59                   pop ecx
// 0061cd7f  c21400               ret 0x14
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
