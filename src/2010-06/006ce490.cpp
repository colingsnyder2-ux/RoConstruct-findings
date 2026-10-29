// roc 2010-06 006ce490  unit: RBX::VArcHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ce490
//
// 006ce490  51                   push ecx
// 006ce491  56                   push esi
// 006ce492  c744240400000000     mov dword ptr [esp + 4], 0
// 006ce49a  e871ecffff           call 0x6cd110
// 006ce49f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce4a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ce4a7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ce4ab  51                   push ecx
// 006ce4ac  52                   push edx
// 006ce4ad  56                   push esi
// 006ce4ae  8bc8                 mov ecx, eax
// 006ce4b0  e88be4ffff           call 0x6cc940
// 006ce4b5  8bc6                 mov eax, esi
// 006ce4b7  5e                   pop esi
// 006ce4b8  59                   pop ecx
// 006ce4b9  c20c00               ret 0xc
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