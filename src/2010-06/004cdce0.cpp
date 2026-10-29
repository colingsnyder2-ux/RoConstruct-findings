// roc 2010-06 004cdce0  unit: RBX::Network::Players  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cdce0
//
// 004cdce0  51                   push ecx
// 004cdce1  56                   push esi
// 004cdce2  c744240400000000     mov dword ptr [esp + 4], 0
// 004cdcea  e821e8f4ff           call 0x41c510
// 004cdcef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cdcf3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cdcf7  83ec10               sub esp, 0x10
// 004cdcfa  8bd4                 mov edx, esp
// 004cdcfc  890a                 mov dword ptr [edx], ecx
// 004cdcfe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cdd02  894a04               mov dword ptr [edx + 4], ecx
// 004cdd05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cdd09  894a08               mov dword ptr [edx + 8], ecx
// 004cdd0c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cdd10  894a0c               mov dword ptr [edx + 0xc], ecx
// 004cdd13  56                   push esi
// 004cdd14  8bc8                 mov ecx, eax
// 004cdd16  e865b3ffff           call 0x4c9080
// 004cdd1b  8bc6                 mov eax, esi
// 004cdd1d  5e                   pop esi
// 004cdd1e  59                   pop ecx
// 004cdd1f  c21400               ret 0x14
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