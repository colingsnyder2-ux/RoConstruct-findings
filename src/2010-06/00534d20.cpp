// roc 2010-06 00534d20  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534d20
//
// 00534d20  51                   push ecx
// 00534d21  56                   push esi
// 00534d22  c744240400000000     mov dword ptr [esp + 4], 0
// 00534d2a  e8e177eeff           call 0x41c510
// 00534d2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534d33  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534d37  83ec10               sub esp, 0x10
// 00534d3a  8bd4                 mov edx, esp
// 00534d3c  890a                 mov dword ptr [edx], ecx
// 00534d3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534d42  894a04               mov dword ptr [edx + 4], ecx
// 00534d45  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534d49  894a08               mov dword ptr [edx + 8], ecx
// 00534d4c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534d50  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534d53  56                   push esi
// 00534d54  8bc8                 mov ecx, eax
// 00534d56  e825eaffff           call 0x533780
// 00534d5b  8bc6                 mov eax, esi
// 00534d5d  5e                   pop esi
// 00534d5e  59                   pop ecx
// 00534d5f  c21400               ret 0x14
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