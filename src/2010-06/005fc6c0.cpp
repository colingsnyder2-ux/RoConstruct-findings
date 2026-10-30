// roc 2010-06 005fc6c0  unit: RBX::Tool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fc6c0
//
// 005fc6c0  51                   push ecx
// 005fc6c1  56                   push esi
// 005fc6c2  c744240400000000     mov dword ptr [esp + 4], 0
// 005fc6ca  e841fee1ff           call 0x41c510
// 005fc6cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fc6d3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fc6d7  83ec10               sub esp, 0x10
// 005fc6da  8bd4                 mov edx, esp
// 005fc6dc  890a                 mov dword ptr [edx], ecx
// 005fc6de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fc6e2  894a04               mov dword ptr [edx + 4], ecx
// 005fc6e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fc6e9  894a08               mov dword ptr [edx + 8], ecx
// 005fc6ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fc6f0  894a0c               mov dword ptr [edx + 0xc], ecx
// 005fc6f3  56                   push esi
// 005fc6f4  8bc8                 mov ecx, eax
// 005fc6f6  e8e5eaffff           call 0x5fb1e0
// 005fc6fb  8bc6                 mov eax, esi
// 005fc6fd  5e                   pop esi
// 005fc6fe  59                   pop ecx
// 005fc6ff  c21400               ret 0x14
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