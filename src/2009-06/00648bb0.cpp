// roc 2009-06 00648bb0  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00648bb0
//
// 00648bb0  51                   push ecx
// 00648bb1  56                   push esi
// 00648bb2  c744240400000000     mov dword ptr [esp + 4], 0
// 00648bba  e8b173feff           call 0x62ff70
// 00648bbf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00648bc3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00648bc7  83ec10               sub esp, 0x10
// 00648bca  8bd4                 mov edx, esp
// 00648bcc  890a                 mov dword ptr [edx], ecx
// 00648bce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00648bd2  894a04               mov dword ptr [edx + 4], ecx
// 00648bd5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00648bd9  894a08               mov dword ptr [edx + 8], ecx
// 00648bdc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00648be0  894a0c               mov dword ptr [edx + 0xc], ecx
// 00648be3  56                   push esi
// 00648be4  8bc8                 mov ecx, eax
// 00648be6  e885e0ffff           call 0x646c70
// 00648beb  8bc6                 mov eax, esi
// 00648bed  5e                   pop esi
// 00648bee  59                   pop ecx
// 00648bef  c21400               ret 0x14
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
