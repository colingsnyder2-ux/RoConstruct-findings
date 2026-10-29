// roc 2009-06 0051fa90  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fa90
//
// 0051fa90  51                   push ecx
// 0051fa91  56                   push esi
// 0051fa92  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fa9a  e881faffff           call 0x51f520
// 0051fa9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051faa3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051faa7  83ec10               sub esp, 0x10
// 0051faaa  8bd4                 mov edx, esp
// 0051faac  890a                 mov dword ptr [edx], ecx
// 0051faae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fab2  894a04               mov dword ptr [edx + 4], ecx
// 0051fab5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fab9  894a08               mov dword ptr [edx + 8], ecx
// 0051fabc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fac0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fac3  56                   push esi
// 0051fac4  8bc8                 mov ecx, eax
// 0051fac6  e825e1ffff           call 0x51dbf0
// 0051facb  8bc6                 mov eax, esi
// 0051facd  5e                   pop esi
// 0051face  59                   pop ecx
// 0051facf  c21400               ret 0x14
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
