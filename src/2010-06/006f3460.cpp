// roc 2010-06 006f3460  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f3460
//
// 006f3460  51                   push ecx
// 006f3461  56                   push esi
// 006f3462  c744240400000000     mov dword ptr [esp + 4], 0
// 006f346a  e86130d7ff           call 0x4664d0
// 006f346f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f3473  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f3477  83ec10               sub esp, 0x10
// 006f347a  8bd4                 mov edx, esp
// 006f347c  890a                 mov dword ptr [edx], ecx
// 006f347e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f3482  894a04               mov dword ptr [edx + 4], ecx
// 006f3485  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f3489  894a08               mov dword ptr [edx + 8], ecx
// 006f348c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006f3490  894a0c               mov dword ptr [edx + 0xc], ecx
// 006f3493  56                   push esi
// 006f3494  8bc8                 mov ecx, eax
// 006f3496  e8b5fcffff           call 0x6f3150
// 006f349b  8bc6                 mov eax, esi
// 006f349d  5e                   pop esi
// 006f349e  59                   pop ecx
// 006f349f  c21400               ret 0x14
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