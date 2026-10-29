// roc 2009-06 0051fa40  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fa40
//
// 0051fa40  51                   push ecx
// 0051fa41  56                   push esi
// 0051fa42  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fa4a  e8a10cf6ff           call 0x4806f0
// 0051fa4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fa53  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fa57  83ec10               sub esp, 0x10
// 0051fa5a  8bd4                 mov edx, esp
// 0051fa5c  890a                 mov dword ptr [edx], ecx
// 0051fa5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fa62  894a04               mov dword ptr [edx + 4], ecx
// 0051fa65  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fa69  894a08               mov dword ptr [edx + 8], ecx
// 0051fa6c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fa70  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fa73  56                   push esi
// 0051fa74  8bc8                 mov ecx, eax
// 0051fa76  e815e0ffff           call 0x51da90
// 0051fa7b  8bc6                 mov eax, esi
// 0051fa7d  5e                   pop esi
// 0051fa7e  59                   pop ecx
// 0051fa7f  c21400               ret 0x14
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
