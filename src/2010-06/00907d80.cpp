// roc 2010-06 00907d80  unit: RBX::RbxParticleEmitter  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00907d80
//
// 00907d80  51                   push ecx
// 00907d81  56                   push esi
// 00907d82  c744240400000000     mov dword ptr [esp + 4], 0
// 00907d8a  e8f1aeb6ff           call 0x472c80
// 00907d8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00907d93  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00907d97  83ec10               sub esp, 0x10
// 00907d9a  8bd4                 mov edx, esp
// 00907d9c  890a                 mov dword ptr [edx], ecx
// 00907d9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00907da2  894a04               mov dword ptr [edx + 4], ecx
// 00907da5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00907da9  894a08               mov dword ptr [edx + 8], ecx
// 00907dac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00907db0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00907db3  56                   push esi
// 00907db4  8bc8                 mov ecx, eax
// 00907db6  e8b5fcffff           call 0x907a70
// 00907dbb  8bc6                 mov eax, esi
// 00907dbd  5e                   pop esi
// 00907dbe  59                   pop ecx
// 00907dbf  c21400               ret 0x14
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