// roc 2009-06 005d4ae0  unit: RBX::Selection  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d4ae0
//
// 005d4ae0  51                   push ecx
// 005d4ae1  56                   push esi
// 005d4ae2  c744240400000000     mov dword ptr [esp + 4], 0
// 005d4aea  e8f117e9ff           call 0x4662e0
// 005d4aef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d4af3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d4af7  83ec10               sub esp, 0x10
// 005d4afa  8bd4                 mov edx, esp
// 005d4afc  890a                 mov dword ptr [edx], ecx
// 005d4afe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d4b02  894a04               mov dword ptr [edx + 4], ecx
// 005d4b05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d4b09  894a08               mov dword ptr [edx + 8], ecx
// 005d4b0c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4b10  894a0c               mov dword ptr [edx + 0xc], ecx
// 005d4b13  56                   push esi
// 005d4b14  8bc8                 mov ecx, eax
// 005d4b16  e8d5f2ffff           call 0x5d3df0
// 005d4b1b  8bc6                 mov eax, esi
// 005d4b1d  5e                   pop esi
// 005d4b1e  59                   pop ecx
// 005d4b1f  c21400               ret 0x14
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
