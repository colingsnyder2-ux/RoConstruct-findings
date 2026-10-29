// roc 2010-06 00627780  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00627780
//
// 00627780  51                   push ecx
// 00627781  56                   push esi
// 00627782  c744240400000000     mov dword ptr [esp + 4], 0
// 0062778a  e811f8fdff           call 0x606fa0
// 0062778f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00627793  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00627797  83ec10               sub esp, 0x10
// 0062779a  8bd4                 mov edx, esp
// 0062779c  890a                 mov dword ptr [edx], ecx
// 0062779e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006277a2  894a04               mov dword ptr [edx + 4], ecx
// 006277a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006277a9  894a08               mov dword ptr [edx + 8], ecx
// 006277ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006277b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 006277b3  56                   push esi
// 006277b4  8bc8                 mov ecx, eax
// 006277b6  e8a5dcffff           call 0x625460
// 006277bb  8bc6                 mov eax, esi
// 006277bd  5e                   pop esi
// 006277be  59                   pop ecx
// 006277bf  c21400               ret 0x14
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