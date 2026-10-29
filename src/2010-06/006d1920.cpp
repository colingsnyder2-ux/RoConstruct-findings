// roc 2010-06 006d1920  unit: RBX::LocalBackpack  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d1920
//
// 006d1920  51                   push ecx
// 006d1921  56                   push esi
// 006d1922  c744240400000000     mov dword ptr [esp + 4], 0
// 006d192a  e8e1abd4ff           call 0x41c510
// 006d192f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d1933  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d1937  83ec10               sub esp, 0x10
// 006d193a  8bd4                 mov edx, esp
// 006d193c  890a                 mov dword ptr [edx], ecx
// 006d193e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006d1942  894a04               mov dword ptr [edx + 4], ecx
// 006d1945  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006d1949  894a08               mov dword ptr [edx + 8], ecx
// 006d194c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d1950  894a0c               mov dword ptr [edx + 0xc], ecx
// 006d1953  56                   push esi
// 006d1954  8bc8                 mov ecx, eax
// 006d1956  e865eeffff           call 0x6d07c0
// 006d195b  8bc6                 mov eax, esi
// 006d195d  5e                   pop esi
// 006d195e  59                   pop ecx
// 006d195f  c21400               ret 0x14
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