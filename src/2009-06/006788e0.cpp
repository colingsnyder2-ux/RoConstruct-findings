// roc 2009-06 006788e0  unit: RBX::$$A6AXPAVPrimitive::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006788e0
//
// 006788e0  51                   push ecx
// 006788e1  56                   push esi
// 006788e2  c744240400000000     mov dword ptr [esp + 4], 0
// 006788ea  e881feffff           call 0x678770
// 006788ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006788f3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006788f7  83ec10               sub esp, 0x10
// 006788fa  8bd4                 mov edx, esp
// 006788fc  890a                 mov dword ptr [edx], ecx
// 006788fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00678902  894a04               mov dword ptr [edx + 4], ecx
// 00678905  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00678909  894a08               mov dword ptr [edx + 8], ecx
// 0067890c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00678910  894a0c               mov dword ptr [edx + 0xc], ecx
// 00678913  56                   push esi
// 00678914  8bc8                 mov ecx, eax
// 00678916  e885faffff           call 0x6783a0
// 0067891b  8bc6                 mov eax, esi
// 0067891d  5e                   pop esi
// 0067891e  59                   pop ecx
// 0067891f  c21400               ret 0x14
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
