// roc 2009-06 00480830  unit: Ogre::RbxPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480830
//
// 00480830  51                   push ecx
// 00480831  56                   push esi
// 00480832  c744240400000000     mov dword ptr [esp + 4], 0
// 0048083a  e861b7f9ff           call 0x41bfa0
// 0048083f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00480843  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00480847  83ec10               sub esp, 0x10
// 0048084a  8bd4                 mov edx, esp
// 0048084c  890a                 mov dword ptr [edx], ecx
// 0048084e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00480852  894a04               mov dword ptr [edx + 4], ecx
// 00480855  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00480859  894a08               mov dword ptr [edx + 8], ecx
// 0048085c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00480860  894a0c               mov dword ptr [edx + 0xc], ecx
// 00480863  56                   push esi
// 00480864  8bc8                 mov ecx, eax
// 00480866  e8e5f8ffff           call 0x480150
// 0048086b  8bc6                 mov eax, esi
// 0048086d  5e                   pop esi
// 0048086e  59                   pop ecx
// 0048086f  c21400               ret 0x14
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
