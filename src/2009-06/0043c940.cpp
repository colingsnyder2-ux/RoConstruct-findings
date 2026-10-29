// roc 2009-06 0043c940  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043c940
//
// 0043c940  51                   push ecx
// 0043c941  56                   push esi
// 0043c942  c744240400000000     mov dword ptr [esp + 4], 0
// 0043c94a  e8812efeff           call 0x41f7d0
// 0043c94f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043c953  8b542410             mov edx, dword ptr [esp + 0x10]
// 0043c957  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043c95b  51                   push ecx
// 0043c95c  52                   push edx
// 0043c95d  56                   push esi
// 0043c95e  8bc8                 mov ecx, eax
// 0043c960  e89be7ffff           call 0x43b100
// 0043c965  8bc6                 mov eax, esi
// 0043c967  5e                   pop esi
// 0043c968  59                   pop ecx
// 0043c969  c20c00               ret 0xc
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
