// roc 2010-06 00907d30  unit: RBX::RbxParticleEmitter  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00907d30
//
// 00907d30  51                   push ecx
// 00907d31  56                   push esi
// 00907d32  c744240400000000     mov dword ptr [esp + 4], 0
// 00907d3a  e89132bbff           call 0x4bafd0
// 00907d3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00907d43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00907d47  83ec10               sub esp, 0x10
// 00907d4a  8bd4                 mov edx, esp
// 00907d4c  890a                 mov dword ptr [edx], ecx
// 00907d4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00907d52  894a04               mov dword ptr [edx + 4], ecx
// 00907d55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00907d59  894a08               mov dword ptr [edx + 8], ecx
// 00907d5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00907d60  894a0c               mov dword ptr [edx + 0xc], ecx
// 00907d63  56                   push esi
// 00907d64  8bc8                 mov ecx, eax
// 00907d66  e8a5fbffff           call 0x907910
// 00907d6b  8bc6                 mov eax, esi
// 00907d6d  5e                   pop esi
// 00907d6e  59                   pop ecx
// 00907d6f  c21400               ret 0x14
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