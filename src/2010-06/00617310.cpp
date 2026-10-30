// roc 2010-06 00617310  unit: RBX::ScriptContext  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00617310
//
// 00617310  51                   push ecx
// 00617311  56                   push esi
// 00617312  c744240400000000     mov dword ptr [esp + 4], 0
// 0061731a  e881fcfeff           call 0x606fa0
// 0061731f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00617323  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00617327  83ec10               sub esp, 0x10
// 0061732a  8bd4                 mov edx, esp
// 0061732c  890a                 mov dword ptr [edx], ecx
// 0061732e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00617332  894a04               mov dword ptr [edx + 4], ecx
// 00617335  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00617339  894a08               mov dword ptr [edx + 8], ecx
// 0061733c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00617340  894a0c               mov dword ptr [edx + 0xc], ecx
// 00617343  56                   push esi
// 00617344  8bc8                 mov ecx, eax
// 00617346  e835c6ffff           call 0x613980
// 0061734b  8bc6                 mov eax, esi
// 0061734d  5e                   pop esi
// 0061734e  59                   pop ecx
// 0061734f  c21400               ret 0x14
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