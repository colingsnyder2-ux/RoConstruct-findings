// roc 2009-06 006058a0  unit: RBX::ServiceProvider  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006058a0
//
// 006058a0  51                   push ecx
// 006058a1  56                   push esi
// 006058a2  c744240400000000     mov dword ptr [esp + 4], 0
// 006058aa  e8e1f9ffff           call 0x605290
// 006058af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006058b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006058b7  83ec10               sub esp, 0x10
// 006058ba  8bd4                 mov edx, esp
// 006058bc  890a                 mov dword ptr [edx], ecx
// 006058be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006058c2  894a04               mov dword ptr [edx + 4], ecx
// 006058c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006058c9  894a08               mov dword ptr [edx + 8], ecx
// 006058cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006058d0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006058d3  56                   push esi
// 006058d4  8bc8                 mov ecx, eax
// 006058d6  e885c0ffff           call 0x601960
// 006058db  8bc6                 mov eax, esi
// 006058dd  5e                   pop esi
// 006058de  59                   pop ecx
// 006058df  c21400               ret 0x14
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
