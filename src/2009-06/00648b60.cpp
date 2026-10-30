// roc 2009-06 00648b60  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00648b60
//
// 00648b60  51                   push ecx
// 00648b61  56                   push esi
// 00648b62  c744240400000000     mov dword ptr [esp + 4], 0
// 00648b6a  e80174feff           call 0x62ff70
// 00648b6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00648b73  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00648b77  83ec10               sub esp, 0x10
// 00648b7a  8bd4                 mov edx, esp
// 00648b7c  890a                 mov dword ptr [edx], ecx
// 00648b7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00648b82  894a04               mov dword ptr [edx + 4], ecx
// 00648b85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00648b89  894a08               mov dword ptr [edx + 8], ecx
// 00648b8c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00648b90  894a0c               mov dword ptr [edx + 0xc], ecx
// 00648b93  56                   push esi
// 00648b94  8bc8                 mov ecx, eax
// 00648b96  e875dfffff           call 0x646b10
// 00648b9b  8bc6                 mov eax, esi
// 00648b9d  5e                   pop esi
// 00648b9e  59                   pop ecx
// 00648b9f  c21400               ret 0x14
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
