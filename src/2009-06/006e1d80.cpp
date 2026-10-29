// roc 2009-06 006e1d80  unit: RBX::Network::$$A6AXABVChatMessage::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e1d80
//
// 006e1d80  51                   push ecx
// 006e1d81  56                   push esi
// 006e1d82  c744240400000000     mov dword ptr [esp + 4], 0
// 006e1d8a  e8c1fdffff           call 0x6e1b50
// 006e1d8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e1d93  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e1d97  83ec10               sub esp, 0x10
// 006e1d9a  8bd4                 mov edx, esp
// 006e1d9c  890a                 mov dword ptr [edx], ecx
// 006e1d9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e1da2  894a04               mov dword ptr [edx + 4], ecx
// 006e1da5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006e1da9  894a08               mov dword ptr [edx + 8], ecx
// 006e1dac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006e1db0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006e1db3  56                   push esi
// 006e1db4  8bc8                 mov ecx, eax
// 006e1db6  e8d5f4ffff           call 0x6e1290
// 006e1dbb  8bc6                 mov eax, esi
// 006e1dbd  5e                   pop esi
// 006e1dbe  59                   pop ecx
// 006e1dbf  c21400               ret 0x14
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
