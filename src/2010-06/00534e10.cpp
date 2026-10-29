// roc 2010-06 00534e10  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534e10
//
// 00534e10  51                   push ecx
// 00534e11  56                   push esi
// 00534e12  c744240400000000     mov dword ptr [esp + 4], 0
// 00534e1a  e821b9eeff           call 0x420740
// 00534e1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534e23  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534e27  83ec10               sub esp, 0x10
// 00534e2a  8bd4                 mov edx, esp
// 00534e2c  890a                 mov dword ptr [edx], ecx
// 00534e2e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534e32  894a04               mov dword ptr [edx + 4], ecx
// 00534e35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534e39  894a08               mov dword ptr [edx + 8], ecx
// 00534e3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534e40  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534e43  56                   push esi
// 00534e44  8bc8                 mov ecx, eax
// 00534e46  e855edffff           call 0x533ba0
// 00534e4b  8bc6                 mov eax, esi
// 00534e4d  5e                   pop esi
// 00534e4e  59                   pop ecx
// 00534e4f  c21400               ret 0x14
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