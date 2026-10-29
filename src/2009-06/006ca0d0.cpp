// roc 2009-06 006ca0d0  unit: RBX::$$A6AXABVStepped::?$signal::slot  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ca0d0
//
// 006ca0d0  51                   push ecx
// 006ca0d1  56                   push esi
// 006ca0d2  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca0da  e851ffffff           call 0x6ca030
// 006ca0df  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ca0e3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca0e7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca0eb  51                   push ecx
// 006ca0ec  52                   push edx
// 006ca0ed  56                   push esi
// 006ca0ee  8bc8                 mov ecx, eax
// 006ca0f0  e8fbfdffff           call 0x6c9ef0
// 006ca0f5  8bc6                 mov eax, esi
// 006ca0f7  5e                   pop esi
// 006ca0f8  59                   pop ecx
// 006ca0f9  c20c00               ret 0xc
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
