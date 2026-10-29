// roc 2010-06 00702a10  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00702a10
//
// 00702a10  51                   push ecx
// 00702a11  56                   push esi
// 00702a12  c744240400000000     mov dword ptr [esp + 4], 0
// 00702a1a  e851fdffff           call 0x702770
// 00702a1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00702a23  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00702a27  83ec10               sub esp, 0x10
// 00702a2a  8bd4                 mov edx, esp
// 00702a2c  890a                 mov dword ptr [edx], ecx
// 00702a2e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00702a32  894a04               mov dword ptr [edx + 4], ecx
// 00702a35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00702a39  894a08               mov dword ptr [edx + 8], ecx
// 00702a3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00702a40  894a0c               mov dword ptr [edx + 0xc], ecx
// 00702a43  56                   push esi
// 00702a44  8bc8                 mov ecx, eax
// 00702a46  e855e2ffff           call 0x700ca0
// 00702a4b  8bc6                 mov eax, esi
// 00702a4d  5e                   pop esi
// 00702a4e  59                   pop ecx
// 00702a4f  c21400               ret 0x14
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