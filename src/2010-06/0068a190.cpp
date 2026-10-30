// roc 2010-06 0068a190  unit: RBX::VInsertService::?$BoundYieldFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068a190
//
// 0068a190  51                   push ecx
// 0068a191  56                   push esi
// 0068a192  c744240400000000     mov dword ptr [esp + 4], 0
// 0068a19a  e871f4ffff           call 0x689610
// 0068a19f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068a1a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068a1a7  83ec10               sub esp, 0x10
// 0068a1aa  8bd4                 mov edx, esp
// 0068a1ac  890a                 mov dword ptr [edx], ecx
// 0068a1ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068a1b2  894a04               mov dword ptr [edx + 4], ecx
// 0068a1b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068a1b9  894a08               mov dword ptr [edx + 8], ecx
// 0068a1bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068a1c0  894a0c               mov dword ptr [edx + 0xc], ecx
// 0068a1c3  56                   push esi
// 0068a1c4  8bc8                 mov ecx, eax
// 0068a1c6  e815a5ffff           call 0x6846e0
// 0068a1cb  8bc6                 mov eax, esi
// 0068a1cd  5e                   pop esi
// 0068a1ce  59                   pop ecx
// 0068a1cf  c21400               ret 0x14
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