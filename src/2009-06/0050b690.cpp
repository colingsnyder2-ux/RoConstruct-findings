// roc 2009-06 0050b690  unit: RBX::Network::ErrorCompPhysicsSender  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050b690
//
// 0050b690  51                   push ecx
// 0050b691  56                   push esi
// 0050b692  c744240400000000     mov dword ptr [esp + 4], 0
// 0050b69a  e80109f1ff           call 0x41bfa0
// 0050b69f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050b6a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050b6a7  83ec10               sub esp, 0x10
// 0050b6aa  8bd4                 mov edx, esp
// 0050b6ac  890a                 mov dword ptr [edx], ecx
// 0050b6ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050b6b2  894a04               mov dword ptr [edx + 4], ecx
// 0050b6b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050b6b9  894a08               mov dword ptr [edx + 8], ecx
// 0050b6bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050b6c0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0050b6c3  56                   push esi
// 0050b6c4  8bc8                 mov ecx, eax
// 0050b6c6  e885f6ffff           call 0x50ad50
// 0050b6cb  8bc6                 mov eax, esi
// 0050b6cd  5e                   pop esi
// 0050b6ce  59                   pop ecx
// 0050b6cf  c21400               ret 0x14
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
