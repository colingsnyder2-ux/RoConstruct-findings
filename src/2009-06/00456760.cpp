// roc 2009-06 00456760  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00456760
//
// 00456760  51                   push ecx
// 00456761  56                   push esi
// 00456762  c744240400000000     mov dword ptr [esp + 4], 0
// 0045676a  e83158fcff           call 0x41bfa0
// 0045676f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00456773  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00456777  83ec10               sub esp, 0x10
// 0045677a  8bd4                 mov edx, esp
// 0045677c  890a                 mov dword ptr [edx], ecx
// 0045677e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00456782  894a04               mov dword ptr [edx + 4], ecx
// 00456785  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456789  894a08               mov dword ptr [edx + 8], ecx
// 0045678c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00456790  894a0c               mov dword ptr [edx + 0xc], ecx
// 00456793  56                   push esi
// 00456794  8bc8                 mov ecx, eax
// 00456796  e885fbffff           call 0x456320
// 0045679b  8bc6                 mov eax, esi
// 0045679d  5e                   pop esi
// 0045679e  59                   pop ecx
// 0045679f  c21400               ret 0x14
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
