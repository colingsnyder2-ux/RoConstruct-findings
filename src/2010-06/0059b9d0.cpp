// roc 2010-06 0059b9d0  unit: RBX::Selection  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059b9d0
//
// 0059b9d0  51                   push ecx
// 0059b9d1  56                   push esi
// 0059b9d2  c744240400000000     mov dword ptr [esp + 4], 0
// 0059b9da  e8a172edff           call 0x472c80
// 0059b9df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b9e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059b9e7  83ec10               sub esp, 0x10
// 0059b9ea  8bd4                 mov edx, esp
// 0059b9ec  890a                 mov dword ptr [edx], ecx
// 0059b9ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059b9f2  894a04               mov dword ptr [edx + 4], ecx
// 0059b9f5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059b9f9  894a08               mov dword ptr [edx + 8], ecx
// 0059b9fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059ba00  894a0c               mov dword ptr [edx + 0xc], ecx
// 0059ba03  56                   push esi
// 0059ba04  8bc8                 mov ecx, eax
// 0059ba06  e875f3ffff           call 0x59ad80
// 0059ba0b  8bc6                 mov eax, esi
// 0059ba0d  5e                   pop esi
// 0059ba0e  59                   pop ecx
// 0059ba0f  c21400               ret 0x14
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