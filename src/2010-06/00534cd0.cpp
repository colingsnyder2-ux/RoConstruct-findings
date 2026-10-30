// roc 2010-06 00534cd0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534cd0
//
// 00534cd0  51                   push ecx
// 00534cd1  56                   push esi
// 00534cd2  c744240400000000     mov dword ptr [esp + 4], 0
// 00534cda  e841fbffff           call 0x534820
// 00534cdf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534ce3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534ce7  83ec10               sub esp, 0x10
// 00534cea  8bd4                 mov edx, esp
// 00534cec  890a                 mov dword ptr [edx], ecx
// 00534cee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534cf2  894a04               mov dword ptr [edx + 4], ecx
// 00534cf5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534cf9  894a08               mov dword ptr [edx + 8], ecx
// 00534cfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534d00  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534d03  56                   push esi
// 00534d04  8bc8                 mov ecx, eax
// 00534d06  e815e9ffff           call 0x533620
// 00534d0b  8bc6                 mov eax, esi
// 00534d0d  5e                   pop esi
// 00534d0e  59                   pop ecx
// 00534d0f  c21400               ret 0x14
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