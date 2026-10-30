// roc 2009-06 004d85f0  unit: RBX::Network::Server  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d85f0
//
// 004d85f0  51                   push ecx
// 004d85f1  56                   push esi
// 004d85f2  c744240400000000     mov dword ptr [esp + 4], 0
// 004d85fa  e8a139f4ff           call 0x41bfa0
// 004d85ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d8603  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d8607  83ec10               sub esp, 0x10
// 004d860a  8bd4                 mov edx, esp
// 004d860c  890a                 mov dword ptr [edx], ecx
// 004d860e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d8612  894a04               mov dword ptr [edx + 4], ecx
// 004d8615  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d8619  894a08               mov dword ptr [edx + 8], ecx
// 004d861c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d8620  894a0c               mov dword ptr [edx + 0xc], ecx
// 004d8623  56                   push esi
// 004d8624  8bc8                 mov ecx, eax
// 004d8626  e8e5f0ffff           call 0x4d7710
// 004d862b  8bc6                 mov eax, esi
// 004d862d  5e                   pop esi
// 004d862e  59                   pop ecx
// 004d862f  c21400               ret 0x14
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
