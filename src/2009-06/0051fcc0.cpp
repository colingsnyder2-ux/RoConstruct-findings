// roc 2009-06 0051fcc0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fcc0
//
// 0051fcc0  51                   push ecx
// 0051fcc1  56                   push esi
// 0051fcc2  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fcca  e81166f4ff           call 0x4662e0
// 0051fccf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fcd3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fcd7  83ec10               sub esp, 0x10
// 0051fcda  8bd4                 mov edx, esp
// 0051fcdc  890a                 mov dword ptr [edx], ecx
// 0051fcde  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fce2  894a04               mov dword ptr [edx + 4], ecx
// 0051fce5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fce9  894a08               mov dword ptr [edx + 8], ecx
// 0051fcec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fcf0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fcf3  56                   push esi
// 0051fcf4  8bc8                 mov ecx, eax
// 0051fcf6  e895e8ffff           call 0x51e590
// 0051fcfb  8bc6                 mov eax, esi
// 0051fcfd  5e                   pop esi
// 0051fcfe  59                   pop ecx
// 0051fcff  c21400               ret 0x14
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
