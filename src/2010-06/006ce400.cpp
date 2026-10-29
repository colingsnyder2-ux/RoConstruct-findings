// roc 2010-06 006ce400  unit: RBX::VArcHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ce400
//
// 006ce400  51                   push ecx
// 006ce401  56                   push esi
// 006ce402  c744240400000000     mov dword ptr [esp + 4], 0
// 006ce40a  e8c180d9ff           call 0x4664d0
// 006ce40f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce413  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ce417  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ce41b  51                   push ecx
// 006ce41c  52                   push edx
// 006ce41d  56                   push esi
// 006ce41e  8bc8                 mov ecx, eax
// 006ce420  e85be1ffff           call 0x6cc580
// 006ce425  8bc6                 mov eax, esi
// 006ce427  5e                   pop esi
// 006ce428  59                   pop ecx
// 006ce429  c20c00               ret 0xc
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