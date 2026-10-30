// roc 2010-06 0050f330  unit: RBX::Network::ErrorCompPhysicsSender  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050f330
//
// 0050f330  51                   push ecx
// 0050f331  56                   push esi
// 0050f332  c744240400000000     mov dword ptr [esp + 4], 0
// 0050f33a  e8d1d1f0ff           call 0x41c510
// 0050f33f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f343  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050f347  83ec10               sub esp, 0x10
// 0050f34a  8bd4                 mov edx, esp
// 0050f34c  890a                 mov dword ptr [edx], ecx
// 0050f34e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050f352  894a04               mov dword ptr [edx + 4], ecx
// 0050f355  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050f359  894a08               mov dword ptr [edx + 8], ecx
// 0050f35c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050f360  894a0c               mov dword ptr [edx + 0xc], ecx
// 0050f363  56                   push esi
// 0050f364  8bc8                 mov ecx, eax
// 0050f366  e825f6ffff           call 0x50e990
// 0050f36b  8bc6                 mov eax, esi
// 0050f36d  5e                   pop esi
// 0050f36e  59                   pop ecx
// 0050f36f  c21400               ret 0x14
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