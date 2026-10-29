// roc 2010-06 004cf5e0  unit: RBX::Network::Players::Plugin  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cf5e0
//
// 004cf5e0  51                   push ecx
// 004cf5e1  56                   push esi
// 004cf5e2  c744240400000000     mov dword ptr [esp + 4], 0
// 004cf5ea  e8e1b9feff           call 0x4bafd0
// 004cf5ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cf5f3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cf5f7  83ec10               sub esp, 0x10
// 004cf5fa  8bd4                 mov edx, esp
// 004cf5fc  890a                 mov dword ptr [edx], ecx
// 004cf5fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cf602  894a04               mov dword ptr [edx + 4], ecx
// 004cf605  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cf609  894a08               mov dword ptr [edx + 8], ecx
// 004cf60c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cf610  894a0c               mov dword ptr [edx + 0xc], ecx
// 004cf613  56                   push esi
// 004cf614  8bc8                 mov ecx, eax
// 004cf616  e885adffff           call 0x4ca3a0
// 004cf61b  8bc6                 mov eax, esi
// 004cf61d  5e                   pop esi
// 004cf61e  59                   pop ecx
// 004cf61f  c21400               ret 0x14
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