// roc 2010-06 005ee1d0  unit: RBX::ChangeHistoryService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ee1d0
//
// 005ee1d0  51                   push ecx
// 005ee1d1  56                   push esi
// 005ee1d2  c744240400000000     mov dword ptr [esp + 4], 0
// 005ee1da  e8c1c6feff           call 0x5da8a0
// 005ee1df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee1e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ee1e7  83ec10               sub esp, 0x10
// 005ee1ea  8bd4                 mov edx, esp
// 005ee1ec  890a                 mov dword ptr [edx], ecx
// 005ee1ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ee1f2  894a04               mov dword ptr [edx + 4], ecx
// 005ee1f5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee1f9  894a08               mov dword ptr [edx + 8], ecx
// 005ee1fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee200  894a0c               mov dword ptr [edx + 0xc], ecx
// 005ee203  56                   push esi
// 005ee204  8bc8                 mov ecx, eax
// 005ee206  e8a5e2ffff           call 0x5ec4b0
// 005ee20b  8bc6                 mov eax, esi
// 005ee20d  5e                   pop esi
// 005ee20e  59                   pop ecx
// 005ee20f  c21400               ret 0x14
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