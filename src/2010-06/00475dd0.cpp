// roc 2010-06 00475dd0  unit: CSelectionCaption  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00475dd0
//
// 00475dd0  51                   push ecx
// 00475dd1  56                   push esi
// 00475dd2  c744240400000000     mov dword ptr [esp + 4], 0
// 00475dda  e801aafaff           call 0x4207e0
// 00475ddf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00475de3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00475de7  83ec10               sub esp, 0x10
// 00475dea  8bd4                 mov edx, esp
// 00475dec  890a                 mov dword ptr [edx], ecx
// 00475dee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00475df2  894a04               mov dword ptr [edx + 4], ecx
// 00475df5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00475df9  894a08               mov dword ptr [edx + 8], ecx
// 00475dfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00475e00  894a0c               mov dword ptr [edx + 0xc], ecx
// 00475e03  56                   push esi
// 00475e04  8bc8                 mov ecx, eax
// 00475e06  e865feffff           call 0x475c70
// 00475e0b  8bc6                 mov eax, esi
// 00475e0d  5e                   pop esi
// 00475e0e  59                   pop ecx
// 00475e0f  c21400               ret 0x14
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