// roc 2010-06 00699480  unit: RBX::$$A6AXPAVPrimitive::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699480
//
// 00699480  51                   push ecx
// 00699481  56                   push esi
// 00699482  c744240400000000     mov dword ptr [esp + 4], 0
// 0069948a  e871feffff           call 0x699300
// 0069948f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00699493  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00699497  83ec10               sub esp, 0x10
// 0069949a  8bd4                 mov edx, esp
// 0069949c  890a                 mov dword ptr [edx], ecx
// 0069949e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006994a2  894a04               mov dword ptr [edx + 4], ecx
// 006994a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006994a9  894a08               mov dword ptr [edx + 8], ecx
// 006994ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006994b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006994b3  56                   push esi
// 006994b4  8bc8                 mov ecx, eax
// 006994b6  e865faffff           call 0x698f20
// 006994bb  8bc6                 mov eax, esi
// 006994bd  5e                   pop esi
// 006994be  59                   pop ecx
// 006994bf  c21400               ret 0x14
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