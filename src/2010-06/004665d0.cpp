// roc 2010-06 004665d0  unit: CRobloxView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004665d0
//
// 004665d0  51                   push ecx
// 004665d1  56                   push esi
// 004665d2  c744240400000000     mov dword ptr [esp + 4], 0
// 004665da  e8315ffbff           call 0x41c510
// 004665df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004665e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004665e7  83ec10               sub esp, 0x10
// 004665ea  8bd4                 mov edx, esp
// 004665ec  890a                 mov dword ptr [edx], ecx
// 004665ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004665f2  894a04               mov dword ptr [edx + 4], ecx
// 004665f5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004665f9  894a08               mov dword ptr [edx + 8], ecx
// 004665fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00466600  894a0c               mov dword ptr [edx + 0xc], ecx
// 00466603  56                   push esi
// 00466604  8bc8                 mov ecx, eax
// 00466606  e855fbffff           call 0x466160
// 0046660b  8bc6                 mov eax, esi
// 0046660d  5e                   pop esi
// 0046660e  59                   pop ecx
// 0046660f  c21400               ret 0x14
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