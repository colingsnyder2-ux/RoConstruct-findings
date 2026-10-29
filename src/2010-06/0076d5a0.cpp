// roc 2010-06 0076d5a0  unit: RBX::ChatOutput  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076d5a0
//
// 0076d5a0  51                   push ecx
// 0076d5a1  56                   push esi
// 0076d5a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0076d5aa  e801f7ffff           call 0x76ccb0
// 0076d5af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076d5b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076d5b7  83ec10               sub esp, 0x10
// 0076d5ba  8bd4                 mov edx, esp
// 0076d5bc  890a                 mov dword ptr [edx], ecx
// 0076d5be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076d5c2  894a04               mov dword ptr [edx + 4], ecx
// 0076d5c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076d5c9  894a08               mov dword ptr [edx + 8], ecx
// 0076d5cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0076d5d0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0076d5d3  56                   push esi
// 0076d5d4  8bc8                 mov ecx, eax
// 0076d5d6  e885eeffff           call 0x76c460
// 0076d5db  8bc6                 mov eax, esi
// 0076d5dd  5e                   pop esi
// 0076d5de  59                   pop ecx
// 0076d5df  c21400               ret 0x14
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