// roc 2010-06 005ee180  unit: RBX::ChangeHistoryService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ee180
//
// 005ee180  51                   push ecx
// 005ee181  56                   push esi
// 005ee182  c744240400000000     mov dword ptr [esp + 4], 0
// 005ee18a  e881e3e2ff           call 0x41c510
// 005ee18f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee193  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ee197  83ec10               sub esp, 0x10
// 005ee19a  8bd4                 mov edx, esp
// 005ee19c  890a                 mov dword ptr [edx], ecx
// 005ee19e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ee1a2  894a04               mov dword ptr [edx + 4], ecx
// 005ee1a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee1a9  894a08               mov dword ptr [edx + 8], ecx
// 005ee1ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee1b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 005ee1b3  56                   push esi
// 005ee1b4  8bc8                 mov ecx, eax
// 005ee1b6  e895e1ffff           call 0x5ec350
// 005ee1bb  8bc6                 mov eax, esi
// 005ee1bd  5e                   pop esi
// 005ee1be  59                   pop ecx
// 005ee1bf  c21400               ret 0x14
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