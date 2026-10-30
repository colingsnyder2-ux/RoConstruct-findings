// roc 2010-06 004cf540  unit: RBX::Network::Players::Plugin  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cf540
//
// 004cf540  51                   push ecx
// 004cf541  56                   push esi
// 004cf542  c744240400000000     mov dword ptr [esp + 4], 0
// 004cf54a  e821bbfeff           call 0x4bb070
// 004cf54f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cf553  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cf557  83ec10               sub esp, 0x10
// 004cf55a  8bd4                 mov edx, esp
// 004cf55c  890a                 mov dword ptr [edx], ecx
// 004cf55e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cf562  894a04               mov dword ptr [edx + 4], ecx
// 004cf565  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cf569  894a08               mov dword ptr [edx + 8], ecx
// 004cf56c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cf570  894a0c               mov dword ptr [edx + 0xc], ecx
// 004cf573  56                   push esi
// 004cf574  8bc8                 mov ecx, eax
// 004cf576  e865abffff           call 0x4ca0e0
// 004cf57b  8bc6                 mov eax, esi
// 004cf57d  5e                   pop esi
// 004cf57e  59                   pop ecx
// 004cf57f  c21400               ret 0x14
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