// roc 2009-06 0067e0c0  unit: RBX::$$A6AXPAVJoint::?$signal::slot  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e0c0
//
// 0067e0c0  51                   push ecx
// 0067e0c1  56                   push esi
// 0067e0c2  c744240400000000     mov dword ptr [esp + 4], 0
// 0067e0ca  e851ffffff           call 0x67e020
// 0067e0cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067e0d3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067e0d7  83ec10               sub esp, 0x10
// 0067e0da  8bd4                 mov edx, esp
// 0067e0dc  890a                 mov dword ptr [edx], ecx
// 0067e0de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067e0e2  894a04               mov dword ptr [edx + 4], ecx
// 0067e0e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067e0e9  894a08               mov dword ptr [edx + 8], ecx
// 0067e0ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0067e0f0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0067e0f3  56                   push esi
// 0067e0f4  8bc8                 mov ecx, eax
// 0067e0f6  e8c5fdffff           call 0x67dec0
// 0067e0fb  8bc6                 mov eax, esi
// 0067e0fd  5e                   pop esi
// 0067e0fe  59                   pop ecx
// 0067e0ff  c21400               ret 0x14
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
