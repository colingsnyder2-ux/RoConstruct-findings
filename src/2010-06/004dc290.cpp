// roc 2010-06 004dc290  unit: RBX::Network::Server  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dc290
//
// 004dc290  51                   push ecx
// 004dc291  56                   push esi
// 004dc292  c744240400000000     mov dword ptr [esp + 4], 0
// 004dc29a  e87102f4ff           call 0x41c510
// 004dc29f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dc2a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004dc2a7  83ec10               sub esp, 0x10
// 004dc2aa  8bd4                 mov edx, esp
// 004dc2ac  890a                 mov dword ptr [edx], ecx
// 004dc2ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004dc2b2  894a04               mov dword ptr [edx + 4], ecx
// 004dc2b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004dc2b9  894a08               mov dword ptr [edx + 8], ecx
// 004dc2bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004dc2c0  894a0c               mov dword ptr [edx + 0xc], ecx
// 004dc2c3  56                   push esi
// 004dc2c4  8bc8                 mov ecx, eax
// 004dc2c6  e8b5f0ffff           call 0x4db380
// 004dc2cb  8bc6                 mov eax, esi
// 004dc2cd  5e                   pop esi
// 004dc2ce  59                   pop ecx
// 004dc2cf  c21400               ret 0x14
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