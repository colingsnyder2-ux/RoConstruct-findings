// roc 2009-06 006fc080  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc080
//
// 006fc080  51                   push ecx
// 006fc081  56                   push esi
// 006fc082  c744240400000000     mov dword ptr [esp + 4], 0
// 006fc08a  e851a2d6ff           call 0x4662e0
// 006fc08f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fc093  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fc097  83ec10               sub esp, 0x10
// 006fc09a  8bd4                 mov edx, esp
// 006fc09c  890a                 mov dword ptr [edx], ecx
// 006fc09e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fc0a2  894a04               mov dword ptr [edx + 4], ecx
// 006fc0a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fc0a9  894a08               mov dword ptr [edx + 8], ecx
// 006fc0ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006fc0b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006fc0b3  56                   push esi
// 006fc0b4  8bc8                 mov ecx, eax
// 006fc0b6  e865feffff           call 0x6fbf20
// 006fc0bb  8bc6                 mov eax, esi
// 006fc0bd  5e                   pop esi
// 006fc0be  59                   pop ecx
// 006fc0bf  c21400               ret 0x14
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
