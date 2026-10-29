// roc 2010-06 0071c8e0  unit: seg_00710000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071c8e0
//
// 0071c8e0  51                   push ecx
// 0071c8e1  56                   push esi
// 0071c8e2  c744240400000000     mov dword ptr [esp + 4], 0
// 0071c8ea  e8e1e6d9ff           call 0x4bafd0
// 0071c8ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071c8f3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071c8f7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071c8fb  51                   push ecx
// 0071c8fc  52                   push edx
// 0071c8fd  56                   push esi
// 0071c8fe  8bc8                 mov ecx, eax
// 0071c900  e89bfeffff           call 0x71c7a0
// 0071c905  8bc6                 mov eax, esi
// 0071c907  5e                   pop esi
// 0071c908  59                   pop ecx
// 0071c909  c20c00               ret 0xc
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