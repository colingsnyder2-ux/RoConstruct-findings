// roc 2009-06 0051f9f0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f9f0
//
// 0051f9f0  51                   push ecx
// 0051f9f1  56                   push esi
// 0051f9f2  c744240400000000     mov dword ptr [esp + 4], 0
// 0051f9fa  e8b19bf3ff           call 0x4595b0
// 0051f9ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fa03  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fa07  83ec10               sub esp, 0x10
// 0051fa0a  8bd4                 mov edx, esp
// 0051fa0c  890a                 mov dword ptr [edx], ecx
// 0051fa0e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fa12  894a04               mov dword ptr [edx + 4], ecx
// 0051fa15  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fa19  894a08               mov dword ptr [edx + 8], ecx
// 0051fa1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fa20  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fa23  56                   push esi
// 0051fa24  8bc8                 mov ecx, eax
// 0051fa26  e805dfffff           call 0x51d930
// 0051fa2b  8bc6                 mov eax, esi
// 0051fa2d  5e                   pop esi
// 0051fa2e  59                   pop ecx
// 0051fa2f  c21400               ret 0x14
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
