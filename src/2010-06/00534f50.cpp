// roc 2010-06 00534f50  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534f50
//
// 00534f50  51                   push ecx
// 00534f51  56                   push esi
// 00534f52  c744240400000000     mov dword ptr [esp + 4], 0
// 00534f5a  e8e1b7eeff           call 0x420740
// 00534f5f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534f63  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534f67  83ec10               sub esp, 0x10
// 00534f6a  8bd4                 mov edx, esp
// 00534f6c  890a                 mov dword ptr [edx], ecx
// 00534f6e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534f72  894a04               mov dword ptr [edx + 4], ecx
// 00534f75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534f79  894a08               mov dword ptr [edx + 8], ecx
// 00534f7c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534f80  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534f83  56                   push esi
// 00534f84  8bc8                 mov ecx, eax
// 00534f86  e895f1ffff           call 0x534120
// 00534f8b  8bc6                 mov eax, esi
// 00534f8d  5e                   pop esi
// 00534f8e  59                   pop ecx
// 00534f8f  c21400               ret 0x14
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