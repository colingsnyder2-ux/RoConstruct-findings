// roc 2009-06 0051fc20  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fc20
//
// 0051fc20  51                   push ecx
// 0051fc21  56                   push esi
// 0051fc22  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fc2a  e8b166f4ff           call 0x4662e0
// 0051fc2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fc33  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fc37  83ec10               sub esp, 0x10
// 0051fc3a  8bd4                 mov edx, esp
// 0051fc3c  890a                 mov dword ptr [edx], ecx
// 0051fc3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fc42  894a04               mov dword ptr [edx + 4], ecx
// 0051fc45  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fc49  894a08               mov dword ptr [edx + 8], ecx
// 0051fc4c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fc50  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fc53  56                   push esi
// 0051fc54  8bc8                 mov ecx, eax
// 0051fc56  e875e6ffff           call 0x51e2d0
// 0051fc5b  8bc6                 mov eax, esi
// 0051fc5d  5e                   pop esi
// 0051fc5e  59                   pop ecx
// 0051fc5f  c21400               ret 0x14
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
