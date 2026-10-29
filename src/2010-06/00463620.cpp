// roc 2010-06 00463620  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00463620
//
// 00463620  51                   push ecx
// 00463621  56                   push esi
// 00463622  c744240400000000     mov dword ptr [esp + 4], 0
// 0046362a  e8e18efbff           call 0x41c510
// 0046362f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00463633  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00463637  83ec10               sub esp, 0x10
// 0046363a  8bd4                 mov edx, esp
// 0046363c  890a                 mov dword ptr [edx], ecx
// 0046363e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00463642  894a04               mov dword ptr [edx + 4], ecx
// 00463645  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00463649  894a08               mov dword ptr [edx + 8], ecx
// 0046364c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00463650  894a0c               mov dword ptr [edx + 0xc], ecx
// 00463653  56                   push esi
// 00463654  8bc8                 mov ecx, eax
// 00463656  e865fbffff           call 0x4631c0
// 0046365b  8bc6                 mov eax, esi
// 0046365d  5e                   pop esi
// 0046365e  59                   pop ecx
// 0046365f  c21400               ret 0x14
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