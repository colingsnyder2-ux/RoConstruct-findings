// roc 2010-06 0068a140  unit: RBX::VInsertService::?$BoundYieldFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068a140
//
// 0068a140  51                   push ecx
// 0068a141  56                   push esi
// 0068a142  c744240400000000     mov dword ptr [esp + 4], 0
// 0068a14a  e821f4ffff           call 0x689570
// 0068a14f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068a153  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068a157  83ec10               sub esp, 0x10
// 0068a15a  8bd4                 mov edx, esp
// 0068a15c  890a                 mov dword ptr [edx], ecx
// 0068a15e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068a162  894a04               mov dword ptr [edx + 4], ecx
// 0068a165  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068a169  894a08               mov dword ptr [edx + 8], ecx
// 0068a16c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068a170  894a0c               mov dword ptr [edx + 0xc], ecx
// 0068a173  56                   push esi
// 0068a174  8bc8                 mov ecx, eax
// 0068a176  e805a4ffff           call 0x684580
// 0068a17b  8bc6                 mov eax, esi
// 0068a17d  5e                   pop esi
// 0068a17e  59                   pop ecx
// 0068a17f  c21400               ret 0x14
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