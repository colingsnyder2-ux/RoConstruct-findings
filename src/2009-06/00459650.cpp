// roc 2009-06 00459650  unit: CRobloxView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00459650
//
// 00459650  51                   push ecx
// 00459651  56                   push esi
// 00459652  c744240400000000     mov dword ptr [esp + 4], 0
// 0045965a  e851ffffff           call 0x4595b0
// 0045965f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00459663  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00459667  83ec14               sub esp, 0x14
// 0045966a  8bd4                 mov edx, esp
// 0045966c  890a                 mov dword ptr [edx], ecx
// 0045966e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00459672  894a04               mov dword ptr [edx + 4], ecx
// 00459675  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00459679  894a08               mov dword ptr [edx + 8], ecx
// 0045967c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00459680  894a0c               mov dword ptr [edx + 0xc], ecx
// 00459683  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00459687  894a10               mov dword ptr [edx + 0x10], ecx
// 0045968a  56                   push esi
// 0045968b  8bc8                 mov ecx, eax
// 0045968d  e89efaffff           call 0x459130
// 00459692  8bc6                 mov eax, esi
// 00459694  5e                   pop esi
// 00459695  59                   pop ecx
// 00459696  c21800               ret 0x18
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
    int f0, f1, f2, f3, f4;
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
