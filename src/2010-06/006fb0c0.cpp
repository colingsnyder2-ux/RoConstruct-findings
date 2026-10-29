// roc 2010-06 006fb0c0  unit: RBX::VGuiObject::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fb0c0
//
// 006fb0c0  51                   push ecx
// 006fb0c1  56                   push esi
// 006fb0c2  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb0ca  e801ffdbff           call 0x4bafd0
// 006fb0cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb0d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb0d7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fb0db  51                   push ecx
// 006fb0dc  52                   push edx
// 006fb0dd  56                   push esi
// 006fb0de  8bc8                 mov ecx, eax
// 006fb0e0  e8bbe4ffff           call 0x6f95a0
// 006fb0e5  8bc6                 mov eax, esi
// 006fb0e7  5e                   pop esi
// 006fb0e8  59                   pop ecx
// 006fb0e9  c20c00               ret 0xc
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