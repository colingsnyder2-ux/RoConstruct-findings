// roc 2010-06 005f8c10  unit: RBX::LegacyHopperService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f8c10
//
// 005f8c10  51                   push ecx
// 005f8c11  56                   push esi
// 005f8c12  c744240400000000     mov dword ptr [esp + 4], 0
// 005f8c1a  e8b123ecff           call 0x4bafd0
// 005f8c1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f8c23  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8c27  83ec10               sub esp, 0x10
// 005f8c2a  8bd4                 mov edx, esp
// 005f8c2c  890a                 mov dword ptr [edx], ecx
// 005f8c2e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f8c32  894a04               mov dword ptr [edx + 4], ecx
// 005f8c35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f8c39  894a08               mov dword ptr [edx + 8], ecx
// 005f8c3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f8c40  894a0c               mov dword ptr [edx + 0xc], ecx
// 005f8c43  56                   push esi
// 005f8c44  8bc8                 mov ecx, eax
// 005f8c46  e875e9ffff           call 0x5f75c0
// 005f8c4b  8bc6                 mov eax, esi
// 005f8c4d  5e                   pop esi
// 005f8c4e  59                   pop ecx
// 005f8c4f  c21400               ret 0x14
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