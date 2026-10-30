// roc 2010-06 0071d820  unit: RBX::VScriptMouseCommand::?$Named  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071d820
//
// 0071d820  51                   push ecx
// 0071d821  56                   push esi
// 0071d822  c744240400000000     mov dword ptr [esp + 4], 0
// 0071d82a  e8a1d7d9ff           call 0x4bafd0
// 0071d82f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071d833  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071d837  83ec10               sub esp, 0x10
// 0071d83a  8bd4                 mov edx, esp
// 0071d83c  890a                 mov dword ptr [edx], ecx
// 0071d83e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071d842  894a04               mov dword ptr [edx + 4], ecx
// 0071d845  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071d849  894a08               mov dword ptr [edx + 8], ecx
// 0071d84c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071d850  894a0c               mov dword ptr [edx + 0xc], ecx
// 0071d853  56                   push esi
// 0071d854  8bc8                 mov ecx, eax
// 0071d856  e865feffff           call 0x71d6c0
// 0071d85b  8bc6                 mov eax, esi
// 0071d85d  5e                   pop esi
// 0071d85e  59                   pop ecx
// 0071d85f  c21400               ret 0x14
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