// roc 2010-06 00698a30  unit: RBX::$$A6AXPAVJoint::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00698a30
//
// 00698a30  51                   push ecx
// 00698a31  56                   push esi
// 00698a32  c744240400000000     mov dword ptr [esp + 4], 0
// 00698a3a  e851ffffff           call 0x698990
// 00698a3f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00698a43  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00698a47  83ec10               sub esp, 0x10
// 00698a4a  8bd4                 mov edx, esp
// 00698a4c  890a                 mov dword ptr [edx], ecx
// 00698a4e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00698a52  894a04               mov dword ptr [edx + 4], ecx
// 00698a55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00698a59  894a08               mov dword ptr [edx + 8], ecx
// 00698a5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00698a60  894a0c               mov dword ptr [edx + 0xc], ecx
// 00698a63  56                   push esi
// 00698a64  8bc8                 mov ecx, eax
// 00698a66  e8c5fdffff           call 0x698830
// 00698a6b  8bc6                 mov eax, esi
// 00698a6d  5e                   pop esi
// 00698a6e  59                   pop ecx
// 00698a6f  c21400               ret 0x14
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