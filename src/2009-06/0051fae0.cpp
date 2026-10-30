// roc 2009-06 0051fae0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fae0
//
// 0051fae0  51                   push ecx
// 0051fae1  56                   push esi
// 0051fae2  c744240400000000     mov dword ptr [esp + 4], 0
// 0051faea  e8b1c4efff           call 0x41bfa0
// 0051faef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051faf3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051faf7  83ec10               sub esp, 0x10
// 0051fafa  8bd4                 mov edx, esp
// 0051fafc  890a                 mov dword ptr [edx], ecx
// 0051fafe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fb02  894a04               mov dword ptr [edx + 4], ecx
// 0051fb05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fb09  894a08               mov dword ptr [edx + 8], ecx
// 0051fb0c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fb10  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fb13  56                   push esi
// 0051fb14  8bc8                 mov ecx, eax
// 0051fb16  e835e2ffff           call 0x51dd50
// 0051fb1b  8bc6                 mov eax, esi
// 0051fb1d  5e                   pop esi
// 0051fb1e  59                   pop ecx
// 0051fb1f  c21400               ret 0x14
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
