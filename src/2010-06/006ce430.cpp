// roc 2010-06 006ce430  unit: RBX::VArcHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ce430
//
// 006ce430  51                   push ecx
// 006ce431  56                   push esi
// 006ce432  c744240400000000     mov dword ptr [esp + 4], 0
// 006ce43a  e89180d9ff           call 0x4664d0
// 006ce43f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce443  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ce447  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ce44b  51                   push ecx
// 006ce44c  52                   push edx
// 006ce44d  56                   push esi
// 006ce44e  8bc8                 mov ecx, eax
// 006ce450  e86be2ffff           call 0x6cc6c0
// 006ce455  8bc6                 mov eax, esi
// 006ce457  5e                   pop esi
// 006ce458  59                   pop ecx
// 006ce459  c20c00               ret 0xc
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