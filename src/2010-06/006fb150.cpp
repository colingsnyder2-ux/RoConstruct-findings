// roc 2010-06 006fb150  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb150
//
// 006fb150  51                   push ecx
// 006fb151  56                   push esi
// 006fb152  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb15a  e801feffff           call 0x6faf60
// 006fb15f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb163  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb167  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb16b  51                   push ecx
// 006fb16c  52                   push edx
// 006fb16d  56                   push esi
// 006fb16e  8bc8                 mov ecx, eax
// 006fb170  e8ebe7ffff           call 0x6f9960
// 006fb175  8bc6                 mov eax, esi
// 006fb177  5e                   pop esi
// 006fb178  59                   pop ecx
// 006fb179  c20c00               ret 0xc
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