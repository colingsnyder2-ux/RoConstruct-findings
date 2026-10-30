// roc 2009-06 00480920  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480920
//
// 00480920  51                   push ecx
// 00480921  56                   push esi
// 00480922  c744240400000000     mov dword ptr [esp + 4], 0
// 0048092a  e801eef9ff           call 0x41f730
// 0048092f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00480933  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00480937  83ec10               sub esp, 0x10
// 0048093a  8bd4                 mov edx, esp
// 0048093c  890a                 mov dword ptr [edx], ecx
// 0048093e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00480942  894a04               mov dword ptr [edx + 4], ecx
// 00480945  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00480949  894a08               mov dword ptr [edx + 8], ecx
// 0048094c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00480950  894a0c               mov dword ptr [edx + 0xc], ecx
// 00480953  56                   push esi
// 00480954  8bc8                 mov ecx, eax
// 00480956  e815fcffff           call 0x480570
// 0048095b  8bc6                 mov eax, esi
// 0048095d  5e                   pop esi
// 0048095e  59                   pop ecx
// 0048095f  c21400               ret 0x14
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
