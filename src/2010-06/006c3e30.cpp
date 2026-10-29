// roc 2010-06 006c3e30  unit: RBX::VMotorFeature::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c3e30
//
// 006c3e30  51                   push ecx
// 006c3e31  56                   push esi
// 006c3e32  c744240400000000     mov dword ptr [esp + 4], 0
// 006c3e3a  e841eedaff           call 0x472c80
// 006c3e3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c3e43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c3e47  83ec10               sub esp, 0x10
// 006c3e4a  8bd4                 mov edx, esp
// 006c3e4c  890a                 mov dword ptr [edx], ecx
// 006c3e4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c3e52  894a04               mov dword ptr [edx + 4], ecx
// 006c3e55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006c3e59  894a08               mov dword ptr [edx + 8], ecx
// 006c3e5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006c3e60  894a0c               mov dword ptr [edx + 0xc], ecx
// 006c3e63  56                   push esi
// 006c3e64  8bc8                 mov ecx, eax
// 006c3e66  e825f5ffff           call 0x6c3390
// 006c3e6b  8bc6                 mov eax, esi
// 006c3e6d  5e                   pop esi
// 006c3e6e  59                   pop ecx
// 006c3e6f  c21400               ret 0x14
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