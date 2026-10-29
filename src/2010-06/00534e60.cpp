// roc 2010-06 00534e60  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534e60
//
// 00534e60  51                   push ecx
// 00534e61  56                   push esi
// 00534e62  c744240400000000     mov dword ptr [esp + 4], 0
// 00534e6a  e811def3ff           call 0x472c80
// 00534e6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534e73  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534e77  83ec10               sub esp, 0x10
// 00534e7a  8bd4                 mov edx, esp
// 00534e7c  890a                 mov dword ptr [edx], ecx
// 00534e7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534e82  894a04               mov dword ptr [edx + 4], ecx
// 00534e85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534e89  894a08               mov dword ptr [edx + 8], ecx
// 00534e8c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534e90  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534e93  56                   push esi
// 00534e94  8bc8                 mov ecx, eax
// 00534e96  e865eeffff           call 0x533d00
// 00534e9b  8bc6                 mov eax, esi
// 00534e9d  5e                   pop esi
// 00534e9e  59                   pop ecx
// 00534e9f  c21400               ret 0x14
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