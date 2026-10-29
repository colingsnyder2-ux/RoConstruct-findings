// roc 2010-06 006fd8f0  unit: RBX::VAnimationTrack::?$BoundFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fd8f0
//
// 006fd8f0  51                   push ecx
// 006fd8f1  56                   push esi
// 006fd8f2  c744240400000000     mov dword ptr [esp + 4], 0
// 006fd8fa  e8d1d6dbff           call 0x4bafd0
// 006fd8ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fd903  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fd907  83ec10               sub esp, 0x10
// 006fd90a  8bd4                 mov edx, esp
// 006fd90c  890a                 mov dword ptr [edx], ecx
// 006fd90e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fd912  894a04               mov dword ptr [edx + 4], ecx
// 006fd915  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fd919  894a08               mov dword ptr [edx + 8], ecx
// 006fd91c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006fd920  894a0c               mov dword ptr [edx + 0xc], ecx
// 006fd923  56                   push esi
// 006fd924  8bc8                 mov ecx, eax
// 006fd926  e8e5f4ffff           call 0x6fce10
// 006fd92b  8bc6                 mov eax, esi
// 006fd92d  5e                   pop esi
// 006fd92e  59                   pop ecx
// 006fd92f  c21400               ret 0x14
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