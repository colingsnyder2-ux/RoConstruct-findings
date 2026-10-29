// roc 2009-06 0050e7a0  unit: PacketReceiveJob  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050e7a0
//
// 0050e7a0  51                   push ecx
// 0050e7a1  56                   push esi
// 0050e7a2  c744240400000000     mov dword ptr [esp + 4], 0
// 0050e7aa  e8317bf5ff           call 0x4662e0
// 0050e7af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050e7b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050e7b7  83ec10               sub esp, 0x10
// 0050e7ba  8bd4                 mov edx, esp
// 0050e7bc  890a                 mov dword ptr [edx], ecx
// 0050e7be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050e7c2  894a04               mov dword ptr [edx + 4], ecx
// 0050e7c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050e7c9  894a08               mov dword ptr [edx + 8], ecx
// 0050e7cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050e7d0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0050e7d3  56                   push esi
// 0050e7d4  8bc8                 mov ecx, eax
// 0050e7d6  e875fcffff           call 0x50e450
// 0050e7db  8bc6                 mov eax, esi
// 0050e7dd  5e                   pop esi
// 0050e7de  59                   pop ecx
// 0050e7df  c21400               ret 0x14
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
