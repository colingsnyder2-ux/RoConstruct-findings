// roc 2010-06 005db570  unit: RBX::ServiceProvider  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005db570
//
// 005db570  51                   push ecx
// 005db571  56                   push esi
// 005db572  c744240400000000     mov dword ptr [esp + 4], 0
// 005db57a  e881f2ffff           call 0x5da800
// 005db57f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005db583  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005db587  83ec10               sub esp, 0x10
// 005db58a  8bd4                 mov edx, esp
// 005db58c  890a                 mov dword ptr [edx], ecx
// 005db58e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005db592  894a04               mov dword ptr [edx + 4], ecx
// 005db595  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005db599  894a08               mov dword ptr [edx + 8], ecx
// 005db59c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005db5a0  894a0c               mov dword ptr [edx + 0xc], ecx
// 005db5a3  56                   push esi
// 005db5a4  8bc8                 mov ecx, eax
// 005db5a6  e8d57affff           call 0x5d3080
// 005db5ab  8bc6                 mov eax, esi
// 005db5ad  5e                   pop esi
// 005db5ae  59                   pop ecx
// 005db5af  c21400               ret 0x14
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