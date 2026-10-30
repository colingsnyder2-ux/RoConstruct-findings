// roc 2010-06 00442400  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00442400
//
// 00442400  51                   push ecx
// 00442401  56                   push esi
// 00442402  c744240400000000     mov dword ptr [esp + 4], 0
// 0044240a  e831e3fdff           call 0x420740
// 0044240f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00442413  8b542410             mov edx, dword ptr [esp + 0x10]
// 00442417  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044241b  51                   push ecx
// 0044241c  52                   push edx
// 0044241d  56                   push esi
// 0044241e  8bc8                 mov ecx, eax
// 00442420  e82be5ffff           call 0x440950
// 00442425  8bc6                 mov eax, esi
// 00442427  5e                   pop esi
// 00442428  59                   pop ecx
// 00442429  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE?AURet@2@PAX0@Z)

namespace ns_ROCX000000 {
struct Ret
{
    Ret(const Ret &);
    ~Ret();
    void *p;
};

struct Impl
{
    Ret g(void *a0, void *a1);
};

struct Getter { static Impl *get(); };

struct S
{
    Ret f(void *a0, void *a1);
};

Ret S::f(void *a0, void *a1)
{
    Impl *impl = Getter::get();
    return impl->g(a0, a1);
}
}