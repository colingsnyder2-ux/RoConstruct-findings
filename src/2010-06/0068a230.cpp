// roc 2010-06 0068a230  unit: RBX::VInsertService::?$BoundYieldFuncDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068a230
//
// 0068a230  51                   push ecx
// 0068a231  56                   push esi
// 0068a232  c744240400000000     mov dword ptr [esp + 4], 0
// 0068a23a  e871f4ffff           call 0x6896b0
// 0068a23f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068a243  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068a247  83ec10               sub esp, 0x10
// 0068a24a  8bd4                 mov edx, esp
// 0068a24c  890a                 mov dword ptr [edx], ecx
// 0068a24e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068a252  894a04               mov dword ptr [edx + 4], ecx
// 0068a255  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068a259  894a08               mov dword ptr [edx + 8], ecx
// 0068a25c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068a260  894a0c               mov dword ptr [edx + 0xc], ecx
// 0068a263  56                   push esi
// 0068a264  8bc8                 mov ecx, eax
// 0068a266  e835a7ffff           call 0x6849a0
// 0068a26b  8bc6                 mov eax, esi
// 0068a26d  5e                   pop esi
// 0068a26e  59                   pop ecx
// 0068a26f  c21400               ret 0x14
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