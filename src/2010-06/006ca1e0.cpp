// roc 2010-06 006ca1e0  unit: RBX::VHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ca1e0
//
// 006ca1e0  51                   push ecx
// 006ca1e1  56                   push esi
// 006ca1e2  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca1ea  e8e1c2d9ff           call 0x4664d0
// 006ca1ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ca1f3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca1f7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca1fb  51                   push ecx
// 006ca1fc  52                   push edx
// 006ca1fd  56                   push esi
// 006ca1fe  8bc8                 mov ecx, eax
// 006ca200  e86be2ffff           call 0x6c8470
// 006ca205  8bc6                 mov eax, esi
// 006ca207  5e                   pop esi
// 006ca208  59                   pop ecx
// 006ca209  c20c00               ret 0xc
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