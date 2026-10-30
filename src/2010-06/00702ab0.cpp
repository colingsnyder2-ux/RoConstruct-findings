// roc 2010-06 00702ab0  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00702ab0
//
// 00702ab0  51                   push ecx
// 00702ab1  56                   push esi
// 00702ab2  c744240400000000     mov dword ptr [esp + 4], 0
// 00702aba  e8f1fdffff           call 0x7028b0
// 00702abf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00702ac3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00702ac7  83ec10               sub esp, 0x10
// 00702aca  8bd4                 mov edx, esp
// 00702acc  890a                 mov dword ptr [edx], ecx
// 00702ace  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00702ad2  894a04               mov dword ptr [edx + 4], ecx
// 00702ad5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00702ad9  894a08               mov dword ptr [edx + 8], ecx
// 00702adc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00702ae0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00702ae3  56                   push esi
// 00702ae4  8bc8                 mov ecx, eax
// 00702ae6  e875e4ffff           call 0x700f60
// 00702aeb  8bc6                 mov eax, esi
// 00702aed  5e                   pop esi
// 00702aee  59                   pop ecx
// 00702aef  c21400               ret 0x14
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