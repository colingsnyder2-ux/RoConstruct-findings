// roc 2010-06 004cf590  unit: RBX::Network::Players::Plugin  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004cf590
//
// 004cf590  51                   push ecx
// 004cf591  56                   push esi
// 004cf592  c744240400000000     mov dword ptr [esp + 4], 0
// 004cf59a  e871bbfeff           call 0x4bb110
// 004cf59f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cf5a3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cf5a7  83ec10               sub esp, 0x10
// 004cf5aa  8bd4                 mov edx, esp
// 004cf5ac  890a                 mov dword ptr [edx], ecx
// 004cf5ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cf5b2  894a04               mov dword ptr [edx + 4], ecx
// 004cf5b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cf5b9  894a08               mov dword ptr [edx + 8], ecx
// 004cf5bc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cf5c0  894a0c               mov dword ptr [edx + 0xc], ecx
// 004cf5c3  56                   push esi
// 004cf5c4  8bc8                 mov ecx, eax
// 004cf5c6  e875acffff           call 0x4ca240
// 004cf5cb  8bc6                 mov eax, esi
// 004cf5cd  5e                   pop esi
// 004cf5ce  59                   pop ecx
// 004cf5cf  c21400               ret 0x14
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