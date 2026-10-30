// roc 2010-06 00907dd0  unit: RBX::RbxParticleEmitter  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00907dd0
//
// 00907dd0  51                   push ecx
// 00907dd1  56                   push esi
// 00907dd2  c744240400000000     mov dword ptr [esp + 4], 0
// 00907dda  e86189b1ff           call 0x420740
// 00907ddf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00907de3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00907de7  83ec10               sub esp, 0x10
// 00907dea  8bd4                 mov edx, esp
// 00907dec  890a                 mov dword ptr [edx], ecx
// 00907dee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00907df2  894a04               mov dword ptr [edx + 4], ecx
// 00907df5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00907df9  894a08               mov dword ptr [edx + 8], ecx
// 00907dfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00907e00  894a0c               mov dword ptr [edx + 0xc], ecx
// 00907e03  56                   push esi
// 00907e04  8bc8                 mov ecx, eax
// 00907e06  e8c5fdffff           call 0x907bd0
// 00907e0b  8bc6                 mov eax, esi
// 00907e0d  5e                   pop esi
// 00907e0e  59                   pop ecx
// 00907e0f  c21400               ret 0x14
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