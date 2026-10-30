// roc 2009-06 0041f8a0  unit: CSelectionTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041f8a0
//
// 0041f8a0  51                   push ecx
// 0041f8a1  56                   push esi
// 0041f8a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0041f8aa  e821ffffff           call 0x41f7d0
// 0041f8af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f8b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041f8b7  83ec10               sub esp, 0x10
// 0041f8ba  8bd4                 mov edx, esp
// 0041f8bc  890a                 mov dword ptr [edx], ecx
// 0041f8be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0041f8c2  894a04               mov dword ptr [edx + 4], ecx
// 0041f8c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0041f8c9  894a08               mov dword ptr [edx + 8], ecx
// 0041f8cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0041f8d0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0041f8d3  56                   push esi
// 0041f8d4  8bc8                 mov ecx, eax
// 0041f8d6  e8d5fcffff           call 0x41f5b0
// 0041f8db  8bc6                 mov eax, esi
// 0041f8dd  5e                   pop esi
// 0041f8de  59                   pop ecx
// 0041f8df  c21400               ret 0x14
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
