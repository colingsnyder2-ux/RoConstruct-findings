// roc 2010-06 004cf4f0  unit: RBX::Network::Players::Plugin  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cf4f0
//
// 004cf4f0  51                   push ecx
// 004cf4f1  56                   push esi
// 004cf4f2  c744240400000000     mov dword ptr [esp + 4], 0
// 004cf4fa  e8b1bcfeff           call 0x4bb1b0
// 004cf4ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cf503  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cf507  83ec10               sub esp, 0x10
// 004cf50a  8bd4                 mov edx, esp
// 004cf50c  890a                 mov dword ptr [edx], ecx
// 004cf50e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cf512  894a04               mov dword ptr [edx + 4], ecx
// 004cf515  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cf519  894a08               mov dword ptr [edx + 8], ecx
// 004cf51c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cf520  894a0c               mov dword ptr [edx + 0xc], ecx
// 004cf523  56                   push esi
// 004cf524  8bc8                 mov ecx, eax
// 004cf526  e855aaffff           call 0x4c9f80
// 004cf52b  8bc6                 mov eax, esi
// 004cf52d  5e                   pop esi
// 004cf52e  59                   pop ecx
// 004cf52f  c21400               ret 0x14
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