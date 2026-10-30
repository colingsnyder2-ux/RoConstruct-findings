// roc 2009-06 0043c970  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043c970
//
// 0043c970  51                   push ecx
// 0043c971  56                   push esi
// 0043c972  c744240400000000     mov dword ptr [esp + 4], 0
// 0043c97a  e8b12dfeff           call 0x41f730
// 0043c97f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043c983  8b542410             mov edx, dword ptr [esp + 0x10]
// 0043c987  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043c98b  51                   push ecx
// 0043c98c  52                   push edx
// 0043c98d  56                   push esi
// 0043c98e  8bc8                 mov ecx, eax
// 0043c990  e8abe8ffff           call 0x43b240
// 0043c995  8bc6                 mov eax, esi
// 0043c997  5e                   pop esi
// 0043c998  59                   pop ecx
// 0043c999  c20c00               ret 0xc
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
