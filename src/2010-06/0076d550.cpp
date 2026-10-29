// roc 2010-06 0076d550  unit: RBX::ChatOutput  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076d550
//
// 0076d550  51                   push ecx
// 0076d551  56                   push esi
// 0076d552  c744240400000000     mov dword ptr [esp + 4], 0
// 0076d55a  e8419ae9ff           call 0x606fa0
// 0076d55f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076d563  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076d567  83ec10               sub esp, 0x10
// 0076d56a  8bd4                 mov edx, esp
// 0076d56c  890a                 mov dword ptr [edx], ecx
// 0076d56e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076d572  894a04               mov dword ptr [edx + 4], ecx
// 0076d575  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076d579  894a08               mov dword ptr [edx + 8], ecx
// 0076d57c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0076d580  894a0c               mov dword ptr [edx + 0xc], ecx
// 0076d583  56                   push esi
// 0076d584  8bc8                 mov ecx, eax
// 0076d586  e875edffff           call 0x76c300
// 0076d58b  8bc6                 mov eax, esi
// 0076d58d  5e                   pop esi
// 0076d58e  59                   pop ecx
// 0076d58f  c21400               ret 0x14
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