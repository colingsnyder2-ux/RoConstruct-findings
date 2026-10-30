// roc 2010-06 00627730  unit: RBX::VStockSound::?$FactoryProduct::Creator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00627730
//
// 00627730  51                   push ecx
// 00627731  56                   push esi
// 00627732  c744240400000000     mov dword ptr [esp + 4], 0
// 0062773a  e861f8fdff           call 0x606fa0
// 0062773f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00627743  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00627747  83ec10               sub esp, 0x10
// 0062774a  8bd4                 mov edx, esp
// 0062774c  890a                 mov dword ptr [edx], ecx
// 0062774e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00627752  894a04               mov dword ptr [edx + 4], ecx
// 00627755  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00627759  894a08               mov dword ptr [edx + 8], ecx
// 0062775c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00627760  894a0c               mov dword ptr [edx + 0xc], ecx
// 00627763  56                   push esi
// 00627764  8bc8                 mov ecx, eax
// 00627766  e895dbffff           call 0x625300
// 0062776b  8bc6                 mov eax, esi
// 0062776d  5e                   pop esi
// 0062776e  59                   pop ecx
// 0062776f  c21400               ret 0x14
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