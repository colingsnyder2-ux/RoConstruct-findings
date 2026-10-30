// roc 2010-06 006fb0f0  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb0f0
//
// 006fb0f0  51                   push ecx
// 006fb0f1  56                   push esi
// 006fb0f2  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb0fa  e861feffff           call 0x6faf60
// 006fb0ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb103  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb107  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb10b  51                   push ecx
// 006fb10c  52                   push edx
// 006fb10d  56                   push esi
// 006fb10e  8bc8                 mov ecx, eax
// 006fb110  e8cbe5ffff           call 0x6f96e0
// 006fb115  8bc6                 mov eax, esi
// 006fb117  5e                   pop esi
// 006fb118  59                   pop ecx
// 006fb119  c20c00               ret 0xc
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