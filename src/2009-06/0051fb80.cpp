// roc 2009-06 0051fb80  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051fb80
//
// 0051fb80  51                   push ecx
// 0051fb81  56                   push esi
// 0051fb82  c744240400000000     mov dword ptr [esp + 4], 0
// 0051fb8a  e8a1fbefff           call 0x41f730
// 0051fb8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fb93  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fb97  83ec10               sub esp, 0x10
// 0051fb9a  8bd4                 mov edx, esp
// 0051fb9c  890a                 mov dword ptr [edx], ecx
// 0051fb9e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fba2  894a04               mov dword ptr [edx + 4], ecx
// 0051fba5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051fba9  894a08               mov dword ptr [edx + 8], ecx
// 0051fbac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051fbb0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0051fbb3  56                   push esi
// 0051fbb4  8bc8                 mov ecx, eax
// 0051fbb6  e855e4ffff           call 0x51e010
// 0051fbbb  8bc6                 mov eax, esi
// 0051fbbd  5e                   pop esi
// 0051fbbe  59                   pop ecx
// 0051fbbf  c21400               ret 0x14
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
