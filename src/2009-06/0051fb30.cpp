// roc 2009-06 0051fb30  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fb30
//
// 0051fb30  51                   push ecx
// 0051fb31  56                   push esi
// 0051fb32  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fb3a  e8a167f4ff           call 0x4662e0
// 0051fb3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fb43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fb47  83ec10               sub esp, 0x10
// 0051fb4a  8bd4                 mov edx, esp
// 0051fb4c  890a                 mov dword ptr [edx], ecx
// 0051fb4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fb52  894a04               mov dword ptr [edx + 4], ecx
// 0051fb55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fb59  894a08               mov dword ptr [edx + 8], ecx
// 0051fb5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fb60  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fb63  56                   push esi
// 0051fb64  8bc8                 mov ecx, eax
// 0051fb66  e845e3ffff           call 0x51deb0
// 0051fb6b  8bc6                 mov eax, esi
// 0051fb6d  5e                   pop esi
// 0051fb6e  59                   pop ecx
// 0051fb6f  c21400               ret 0x14
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
