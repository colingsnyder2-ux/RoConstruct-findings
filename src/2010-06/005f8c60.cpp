// roc 2010-06 005f8c60  unit: RBX::LegacyHopperService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f8c60
//
// 005f8c60  51                   push ecx
// 005f8c61  56                   push esi
// 005f8c62  c744240400000000     mov dword ptr [esp + 4], 0
// 005f8c6a  e8a138e2ff           call 0x41c510
// 005f8c6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f8c73  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8c77  83ec10               sub esp, 0x10
// 005f8c7a  8bd4                 mov edx, esp
// 005f8c7c  890a                 mov dword ptr [edx], ecx
// 005f8c7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f8c82  894a04               mov dword ptr [edx + 4], ecx
// 005f8c85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f8c89  894a08               mov dword ptr [edx + 8], ecx
// 005f8c8c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f8c90  894a0c               mov dword ptr [edx + 0xc], ecx
// 005f8c93  56                   push esi
// 005f8c94  8bc8                 mov ecx, eax
// 005f8c96  e885eaffff           call 0x5f7720
// 005f8c9b  8bc6                 mov eax, esi
// 005f8c9d  5e                   pop esi
// 005f8c9e  59                   pop ecx
// 005f8c9f  c21400               ret 0x14
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