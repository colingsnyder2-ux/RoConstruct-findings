// roc 2010-06 00534c80  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534c80
//
// 00534c80  51                   push ecx
// 00534c81  56                   push esi
// 00534c82  c744240400000000     mov dword ptr [esp + 4], 0
// 00534c8a  e84163f8ff           call 0x4bafd0
// 00534c8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534c93  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534c97  83ec10               sub esp, 0x10
// 00534c9a  8bd4                 mov edx, esp
// 00534c9c  890a                 mov dword ptr [edx], ecx
// 00534c9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534ca2  894a04               mov dword ptr [edx + 4], ecx
// 00534ca5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534ca9  894a08               mov dword ptr [edx + 8], ecx
// 00534cac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534cb0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534cb3  56                   push esi
// 00534cb4  8bc8                 mov ecx, eax
// 00534cb6  e805e8ffff           call 0x5334c0
// 00534cbb  8bc6                 mov eax, esi
// 00534cbd  5e                   pop esi
// 00534cbe  59                   pop ecx
// 00534cbf  c21400               ret 0x14
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