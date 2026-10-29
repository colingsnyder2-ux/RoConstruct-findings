// roc 2010-06 004423d0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004423d0
//
// 004423d0  51                   push ecx
// 004423d1  56                   push esi
// 004423d2  c744240400000000     mov dword ptr [esp + 4], 0
// 004423da  e801e4fdff           call 0x4207e0
// 004423df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004423e3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004423e7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004423eb  51                   push ecx
// 004423ec  52                   push edx
// 004423ed  56                   push esi
// 004423ee  8bc8                 mov ecx, eax
// 004423f0  e81be4ffff           call 0x440810
// 004423f5  8bc6                 mov eax, esi
// 004423f7  5e                   pop esi
// 004423f8  59                   pop ecx
// 004423f9  c20c00               ret 0xc
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