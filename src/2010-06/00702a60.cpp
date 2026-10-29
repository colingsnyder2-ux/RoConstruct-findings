// roc 2010-06 00702a60  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00702a60
//
// 00702a60  51                   push ecx
// 00702a61  56                   push esi
// 00702a62  c744240400000000     mov dword ptr [esp + 4], 0
// 00702a6a  e8a1fdffff           call 0x702810
// 00702a6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00702a73  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00702a77  83ec10               sub esp, 0x10
// 00702a7a  8bd4                 mov edx, esp
// 00702a7c  890a                 mov dword ptr [edx], ecx
// 00702a7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00702a82  894a04               mov dword ptr [edx + 4], ecx
// 00702a85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00702a89  894a08               mov dword ptr [edx + 8], ecx
// 00702a8c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00702a90  894a0c               mov dword ptr [edx + 0xc], ecx
// 00702a93  56                   push esi
// 00702a94  8bc8                 mov ecx, eax
// 00702a96  e865e3ffff           call 0x700e00
// 00702a9b  8bc6                 mov eax, esi
// 00702a9d  5e                   pop esi
// 00702a9e  59                   pop ecx
// 00702a9f  c21400               ret 0x14
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