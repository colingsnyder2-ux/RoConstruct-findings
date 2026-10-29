// roc 2010-06 006ca1b0  unit: RBX::VHandles::?$EventDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ca1b0
//
// 006ca1b0  51                   push ecx
// 006ca1b1  56                   push esi
// 006ca1b2  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca1ba  e811c3d9ff           call 0x4664d0
// 006ca1bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ca1c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca1c7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca1cb  51                   push ecx
// 006ca1cc  52                   push edx
// 006ca1cd  56                   push esi
// 006ca1ce  8bc8                 mov ecx, eax
// 006ca1d0  e85be1ffff           call 0x6c8330
// 006ca1d5  8bc6                 mov eax, esi
// 006ca1d7  5e                   pop esi
// 006ca1d8  59                   pop ecx
// 006ca1d9  c20c00               ret 0xc
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