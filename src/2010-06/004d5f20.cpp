// roc 2010-06 004d5f20  unit: RBX::Network::Client  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d5f20
//
// 004d5f20  51                   push ecx
// 004d5f21  56                   push esi
// 004d5f22  c744240400000000     mov dword ptr [esp + 4], 0
// 004d5f2a  e8a150feff           call 0x4bafd0
// 004d5f2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5f33  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d5f37  83ec10               sub esp, 0x10
// 004d5f3a  8bd4                 mov edx, esp
// 004d5f3c  890a                 mov dword ptr [edx], ecx
// 004d5f3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d5f42  894a04               mov dword ptr [edx + 4], ecx
// 004d5f45  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d5f49  894a08               mov dword ptr [edx + 8], ecx
// 004d5f4c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d5f50  894a0c               mov dword ptr [edx + 0xc], ecx
// 004d5f53  56                   push esi
// 004d5f54  8bc8                 mov ecx, eax
// 004d5f56  e895deffff           call 0x4d3df0
// 004d5f5b  8bc6                 mov eax, esi
// 004d5f5d  5e                   pop esi
// 004d5f5e  59                   pop ecx
// 004d5f5f  c21400               ret 0x14
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