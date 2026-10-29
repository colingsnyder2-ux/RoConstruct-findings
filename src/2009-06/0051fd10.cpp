// roc 2009-06 0051fd10  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fd10
//
// 0051fd10  51                   push ecx
// 0051fd11  56                   push esi
// 0051fd12  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fd1a  e811faefff           call 0x41f730
// 0051fd1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fd23  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fd27  83ec10               sub esp, 0x10
// 0051fd2a  8bd4                 mov edx, esp
// 0051fd2c  890a                 mov dword ptr [edx], ecx
// 0051fd2e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fd32  894a04               mov dword ptr [edx + 4], ecx
// 0051fd35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fd39  894a08               mov dword ptr [edx + 8], ecx
// 0051fd3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fd40  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fd43  56                   push esi
// 0051fd44  8bc8                 mov ecx, eax
// 0051fd46  e8a5e9ffff           call 0x51e6f0
// 0051fd4b  8bc6                 mov eax, esi
// 0051fd4d  5e                   pop esi
// 0051fd4e  59                   pop ecx
// 0051fd4f  c21400               ret 0x14
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
