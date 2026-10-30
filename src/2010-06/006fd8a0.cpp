// roc 2010-06 006fd8a0  unit: RBX::VAnimationTrack::?$BoundFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fd8a0
//
// 006fd8a0  51                   push ecx
// 006fd8a1  56                   push esi
// 006fd8a2  c744240400000000     mov dword ptr [esp + 4], 0
// 006fd8aa  e8a1d9dbff           call 0x4bb250
// 006fd8af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fd8b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd8b7  83ec10               sub esp, 0x10
// 006fd8ba  8bd4                 mov edx, esp
// 006fd8bc  890a                 mov dword ptr [edx], ecx
// 006fd8be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fd8c2  894a04               mov dword ptr [edx + 4], ecx
// 006fd8c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fd8c9  894a08               mov dword ptr [edx + 8], ecx
// 006fd8cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006fd8d0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006fd8d3  56                   push esi
// 006fd8d4  8bc8                 mov ecx, eax
// 006fd8d6  e8d5f3ffff           call 0x6fccb0
// 006fd8db  8bc6                 mov eax, esi
// 006fd8dd  5e                   pop esi
// 006fd8de  59                   pop ecx
// 006fd8df  c21400               ret 0x14
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