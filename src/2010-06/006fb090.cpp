// roc 2010-06 006fb090  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb090
//
// 006fb090  51                   push ecx
// 006fb091  56                   push esi
// 006fb092  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb09a  e831b4d6ff           call 0x4664d0
// 006fb09f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb0a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb0a7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb0ab  51                   push ecx
// 006fb0ac  52                   push edx
// 006fb0ad  56                   push esi
// 006fb0ae  8bc8                 mov ecx, eax
// 006fb0b0  e8abe3ffff           call 0x6f9460
// 006fb0b5  8bc6                 mov eax, esi
// 006fb0b7  5e                   pop esi
// 006fb0b8  59                   pop ecx
// 006fb0b9  c20c00               ret 0xc
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