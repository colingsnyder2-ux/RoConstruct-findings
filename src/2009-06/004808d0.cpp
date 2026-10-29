// roc 2009-06 004808d0  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004808d0
//
// 004808d0  51                   push ecx
// 004808d1  56                   push esi
// 004808d2  c744240400000000     mov dword ptr [esp + 4], 0
// 004808da  e851eef9ff           call 0x41f730
// 004808df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004808e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004808e7  83ec10               sub esp, 0x10
// 004808ea  8bd4                 mov edx, esp
// 004808ec  890a                 mov dword ptr [edx], ecx
// 004808ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004808f2  894a04               mov dword ptr [edx + 4], ecx
// 004808f5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004808f9  894a08               mov dword ptr [edx + 8], ecx
// 004808fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00480900  894a0c               mov dword ptr [edx + 0xc], ecx
// 00480903  56                   push esi
// 00480904  8bc8                 mov ecx, eax
// 00480906  e805fbffff           call 0x480410
// 0048090b  8bc6                 mov eax, esi
// 0048090d  5e                   pop esi
// 0048090e  59                   pop ecx
// 0048090f  c21400               ret 0x14
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
