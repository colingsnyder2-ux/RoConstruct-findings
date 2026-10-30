// roc 2010-06 00534c30  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534c30
//
// 00534c30  51                   push ecx
// 00534c31  56                   push esi
// 00534c32  c744240400000000     mov dword ptr [esp + 4], 0
// 00534c3a  e89118f3ff           call 0x4664d0
// 00534c3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534c43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534c47  83ec10               sub esp, 0x10
// 00534c4a  8bd4                 mov edx, esp
// 00534c4c  890a                 mov dword ptr [edx], ecx
// 00534c4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534c52  894a04               mov dword ptr [edx + 4], ecx
// 00534c55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534c59  894a08               mov dword ptr [edx + 8], ecx
// 00534c5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534c60  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534c63  56                   push esi
// 00534c64  8bc8                 mov ecx, eax
// 00534c66  e8f5e6ffff           call 0x533360
// 00534c6b  8bc6                 mov eax, esi
// 00534c6d  5e                   pop esi
// 00534c6e  59                   pop ecx
// 00534c6f  c21400               ret 0x14
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