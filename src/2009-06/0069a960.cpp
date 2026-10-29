// roc 2009-06 0069a960  unit: RBX::VHole::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069a960
//
// 0069a960  51                   push ecx
// 0069a961  56                   push esi
// 0069a962  c744240400000000     mov dword ptr [esp + 4], 0
// 0069a96a  e871b9dcff           call 0x4662e0
// 0069a96f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069a973  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069a977  83ec10               sub esp, 0x10
// 0069a97a  8bd4                 mov edx, esp
// 0069a97c  890a                 mov dword ptr [edx], ecx
// 0069a97e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069a982  894a04               mov dword ptr [edx + 4], ecx
// 0069a985  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0069a989  894a08               mov dword ptr [edx + 8], ecx
// 0069a98c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0069a990  894a0c               mov dword ptr [edx + 0xc], ecx
// 0069a993  56                   push esi
// 0069a994  8bc8                 mov ecx, eax
// 0069a996  e8d5f4ffff           call 0x699e70
// 0069a99b  8bc6                 mov eax, esi
// 0069a99d  5e                   pop esi
// 0069a99e  59                   pop ecx
// 0069a99f  c21400               ret 0x14
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
