// roc 2010-06 0068a1e0  unit: RBX::VInsertService::?$BoundYieldFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068a1e0
//
// 0068a1e0  51                   push ecx
// 0068a1e1  56                   push esi
// 0068a1e2  c744240400000000     mov dword ptr [esp + 4], 0
// 0068a1ea  e8a10ce3ff           call 0x4bae90
// 0068a1ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068a1f3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068a1f7  83ec10               sub esp, 0x10
// 0068a1fa  8bd4                 mov edx, esp
// 0068a1fc  890a                 mov dword ptr [edx], ecx
// 0068a1fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068a202  894a04               mov dword ptr [edx + 4], ecx
// 0068a205  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068a209  894a08               mov dword ptr [edx + 8], ecx
// 0068a20c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068a210  894a0c               mov dword ptr [edx + 0xc], ecx
// 0068a213  56                   push esi
// 0068a214  8bc8                 mov ecx, eax
// 0068a216  e825a6ffff           call 0x684840
// 0068a21b  8bc6                 mov eax, esi
// 0068a21d  5e                   pop esi
// 0068a21e  59                   pop ecx
// 0068a21f  c21400               ret 0x14
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