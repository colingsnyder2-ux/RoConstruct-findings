// roc 2010-06 006fb120  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb120
//
// 006fb120  51                   push ecx
// 006fb121  56                   push esi
// 006fb122  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb12a  e8a1fedbff           call 0x4bafd0
// 006fb12f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb133  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb137  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb13b  51                   push ecx
// 006fb13c  52                   push edx
// 006fb13d  56                   push esi
// 006fb13e  8bc8                 mov ecx, eax
// 006fb140  e8dbe6ffff           call 0x6f9820
// 006fb145  8bc6                 mov eax, esi
// 006fb147  5e                   pop esi
// 006fb148  59                   pop ecx
// 006fb149  c20c00               ret 0xc
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