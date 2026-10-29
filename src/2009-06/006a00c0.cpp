// roc 2009-06 006a00c0  unit: RBX::LocalBackpack  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a00c0
//
// 006a00c0  51                   push ecx
// 006a00c1  56                   push esi
// 006a00c2  c744240400000000     mov dword ptr [esp + 4], 0
// 006a00ca  e8d1bed7ff           call 0x41bfa0
// 006a00cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a00d3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a00d7  83ec10               sub esp, 0x10
// 006a00da  8bd4                 mov edx, esp
// 006a00dc  890a                 mov dword ptr [edx], ecx
// 006a00de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a00e2  894a04               mov dword ptr [edx + 4], ecx
// 006a00e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a00e9  894a08               mov dword ptr [edx + 8], ecx
// 006a00ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006a00f0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006a00f3  56                   push esi
// 006a00f4  8bc8                 mov ecx, eax
// 006a00f6  e875eeffff           call 0x69ef70
// 006a00fb  8bc6                 mov eax, esi
// 006a00fd  5e                   pop esi
// 006a00fe  59                   pop ecx
// 006a00ff  c21400               ret 0x14
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
