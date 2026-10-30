// roc 2010-06 00534dc0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534dc0
//
// 00534dc0  51                   push ecx
// 00534dc1  56                   push esi
// 00534dc2  c744240400000000     mov dword ptr [esp + 4], 0
// 00534dca  e871b9eeff           call 0x420740
// 00534dcf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534dd3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534dd7  83ec10               sub esp, 0x10
// 00534dda  8bd4                 mov edx, esp
// 00534ddc  890a                 mov dword ptr [edx], ecx
// 00534dde  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534de2  894a04               mov dword ptr [edx + 4], ecx
// 00534de5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534de9  894a08               mov dword ptr [edx + 8], ecx
// 00534dec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534df0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534df3  56                   push esi
// 00534df4  8bc8                 mov ecx, eax
// 00534df6  e845ecffff           call 0x533a40
// 00534dfb  8bc6                 mov eax, esi
// 00534dfd  5e                   pop esi
// 00534dfe  59                   pop ecx
// 00534dff  c21400               ret 0x14
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