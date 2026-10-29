// roc 2010-06 006ca210  unit: RBX::VHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ca210
//
// 006ca210  51                   push ecx
// 006ca211  56                   push esi
// 006ca212  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca21a  e821edffff           call 0x6c8f40
// 006ca21f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ca223  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca227  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca22b  51                   push ecx
// 006ca22c  52                   push edx
// 006ca22d  56                   push esi
// 006ca22e  8bc8                 mov ecx, eax
// 006ca230  e87be3ffff           call 0x6c85b0
// 006ca235  8bc6                 mov eax, esi
// 006ca237  5e                   pop esi
// 006ca238  59                   pop ecx
// 006ca239  c20c00               ret 0xc
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