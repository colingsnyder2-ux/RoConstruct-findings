// roc 2010-06 00534eb0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534eb0
//
// 00534eb0  51                   push ecx
// 00534eb1  56                   push esi
// 00534eb2  c744240400000000     mov dword ptr [esp + 4], 0
// 00534eba  e881b8eeff           call 0x420740
// 00534ebf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534ec3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00534ec7  83ec10               sub esp, 0x10
// 00534eca  8bd4                 mov edx, esp
// 00534ecc  890a                 mov dword ptr [edx], ecx
// 00534ece  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534ed2  894a04               mov dword ptr [edx + 4], ecx
// 00534ed5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00534ed9  894a08               mov dword ptr [edx + 8], ecx
// 00534edc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00534ee0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00534ee3  56                   push esi
// 00534ee4  8bc8                 mov ecx, eax
// 00534ee6  e875efffff           call 0x533e60
// 00534eeb  8bc6                 mov eax, esi
// 00534eed  5e                   pop esi
// 00534eee  59                   pop ecx
// 00534eef  c21400               ret 0x14
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