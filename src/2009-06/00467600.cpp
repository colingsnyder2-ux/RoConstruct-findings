// roc 2009-06 00467600  unit: CSelectionCaption  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00467600
//
// 00467600  51                   push ecx
// 00467601  56                   push esi
// 00467602  c744240400000000     mov dword ptr [esp + 4], 0
// 0046760a  e8c181fbff           call 0x41f7d0
// 0046760f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00467613  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00467617  83ec10               sub esp, 0x10
// 0046761a  8bd4                 mov edx, esp
// 0046761c  890a                 mov dword ptr [edx], ecx
// 0046761e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00467622  894a04               mov dword ptr [edx + 4], ecx
// 00467625  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00467629  894a08               mov dword ptr [edx + 8], ecx
// 0046762c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00467630  894a0c               mov dword ptr [edx + 0xc], ecx
// 00467633  56                   push esi
// 00467634  8bc8                 mov ecx, eax
// 00467636  e865feffff           call 0x4674a0
// 0046763b  8bc6                 mov eax, esi
// 0046763d  5e                   pop esi
// 0046763e  59                   pop ecx
// 0046763f  c21400               ret 0x14
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
