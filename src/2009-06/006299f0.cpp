// roc 2009-06 006299f0  unit: RBX::Tool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006299f0
//
// 006299f0  51                   push ecx
// 006299f1  56                   push esi
// 006299f2  c744240400000000     mov dword ptr [esp + 4], 0
// 006299fa  e8a125dfff           call 0x41bfa0
// 006299ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00629a03  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629a07  83ec10               sub esp, 0x10
// 00629a0a  8bd4                 mov edx, esp
// 00629a0c  890a                 mov dword ptr [edx], ecx
// 00629a0e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00629a12  894a04               mov dword ptr [edx + 4], ecx
// 00629a15  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00629a19  894a08               mov dword ptr [edx + 8], ecx
// 00629a1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00629a20  894a0c               mov dword ptr [edx + 0xc], ecx
// 00629a23  56                   push esi
// 00629a24  8bc8                 mov ecx, eax
// 00629a26  e825f0ffff           call 0x628a50
// 00629a2b  8bc6                 mov eax, esi
// 00629a2d  5e                   pop esi
// 00629a2e  59                   pop ecx
// 00629a2f  c21400               ret 0x14
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
