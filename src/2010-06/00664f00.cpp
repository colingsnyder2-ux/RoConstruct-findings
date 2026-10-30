// roc 2010-06 00664f00  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00664f00
//
// 00664f00  51                   push ecx
// 00664f01  56                   push esi
// 00664f02  c744240400000000     mov dword ptr [esp + 4], 0
// 00664f0a  e8c160e5ff           call 0x4bafd0
// 00664f0f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00664f13  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00664f17  83ec10               sub esp, 0x10
// 00664f1a  8bd4                 mov edx, esp
// 00664f1c  890a                 mov dword ptr [edx], ecx
// 00664f1e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00664f22  894a04               mov dword ptr [edx + 4], ecx
// 00664f25  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00664f29  894a08               mov dword ptr [edx + 8], ecx
// 00664f2c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00664f30  894a0c               mov dword ptr [edx + 0xc], ecx
// 00664f33  56                   push esi
// 00664f34  8bc8                 mov ecx, eax
// 00664f36  e805e0ffff           call 0x662f40
// 00664f3b  8bc6                 mov eax, esi
// 00664f3d  5e                   pop esi
// 00664f3e  59                   pop ecx
// 00664f3f  c21400               ret 0x14
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