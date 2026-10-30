// roc 2010-06 006ca240  unit: RBX::VHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ca240
//
// 006ca240  51                   push ecx
// 006ca241  56                   push esi
// 006ca242  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca24a  e891edffff           call 0x6c8fe0
// 006ca24f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ca253  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca257  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca25b  51                   push ecx
// 006ca25c  52                   push edx
// 006ca25d  56                   push esi
// 006ca25e  8bc8                 mov ecx, eax
// 006ca260  e88be4ffff           call 0x6c86f0
// 006ca265  8bc6                 mov eax, esi
// 006ca267  5e                   pop esi
// 006ca268  59                   pop ecx
// 006ca269  c20c00               ret 0xc
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