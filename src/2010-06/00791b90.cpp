// roc 2010-06 00791b90  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00791b90
//
// 00791b90  51                   push ecx
// 00791b91  56                   push esi
// 00791b92  c744240400000000     mov dword ptr [esp + 4], 0
// 00791b9a  e8e110ceff           call 0x472c80
// 00791b9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00791ba3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00791ba7  83ec10               sub esp, 0x10
// 00791baa  8bd4                 mov edx, esp
// 00791bac  890a                 mov dword ptr [edx], ecx
// 00791bae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00791bb2  894a04               mov dword ptr [edx + 4], ecx
// 00791bb5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00791bb9  894a08               mov dword ptr [edx + 8], ecx
// 00791bbc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00791bc0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00791bc3  56                   push esi
// 00791bc4  8bc8                 mov ecx, eax
// 00791bc6  e865feffff           call 0x791a30
// 00791bcb  8bc6                 mov eax, esi
// 00791bcd  5e                   pop esi
// 00791bce  59                   pop ecx
// 00791bcf  c21400               ret 0x14
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