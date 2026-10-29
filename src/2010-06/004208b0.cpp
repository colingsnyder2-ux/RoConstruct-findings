// roc 2010-06 004208b0  unit: CSelectionTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004208b0
//
// 004208b0  51                   push ecx
// 004208b1  56                   push esi
// 004208b2  c744240400000000     mov dword ptr [esp + 4], 0
// 004208ba  e821ffffff           call 0x4207e0
// 004208bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004208c3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004208c7  83ec10               sub esp, 0x10
// 004208ca  8bd4                 mov edx, esp
// 004208cc  890a                 mov dword ptr [edx], ecx
// 004208ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004208d2  894a04               mov dword ptr [edx + 4], ecx
// 004208d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004208d9  894a08               mov dword ptr [edx + 8], ecx
// 004208dc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004208e0  894a0c               mov dword ptr [edx + 0xc], ecx
// 004208e3  56                   push esi
// 004208e4  8bc8                 mov ecx, eax
// 004208e6  e8d5fcffff           call 0x4205c0
// 004208eb  8bc6                 mov eax, esi
// 004208ed  5e                   pop esi
// 004208ee  59                   pop ecx
// 004208ef  c21400               ret 0x14
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