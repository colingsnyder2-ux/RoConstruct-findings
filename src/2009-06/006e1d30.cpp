// roc 2009-06 006e1d30  unit: RBX::Network::$$A6AXABVChatMessage::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e1d30
//
// 006e1d30  51                   push ecx
// 006e1d31  56                   push esi
// 006e1d32  c744240400000000     mov dword ptr [esp + 4], 0
// 006e1d3a  e831e2f4ff           call 0x62ff70
// 006e1d3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e1d43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e1d47  83ec10               sub esp, 0x10
// 006e1d4a  8bd4                 mov edx, esp
// 006e1d4c  890a                 mov dword ptr [edx], ecx
// 006e1d4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e1d52  894a04               mov dword ptr [edx + 4], ecx
// 006e1d55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006e1d59  894a08               mov dword ptr [edx + 8], ecx
// 006e1d5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006e1d60  894a0c               mov dword ptr [edx + 0xc], ecx
// 006e1d63  56                   push esi
// 006e1d64  8bc8                 mov ecx, eax
// 006e1d66  e8c5f3ffff           call 0x6e1130
// 006e1d6b  8bc6                 mov eax, esi
// 006e1d6d  5e                   pop esi
// 006e1d6e  59                   pop ecx
// 006e1d6f  c21400               ret 0x14
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
