// roc 2010-06 0041c5c0  unit: CSettingsExplorer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041c5c0
//
// 0041c5c0  51                   push ecx
// 0041c5c1  56                   push esi
// 0041c5c2  c744240400000000     mov dword ptr [esp + 4], 0
// 0041c5ca  e841ffffff           call 0x41c510
// 0041c5cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c5d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041c5d7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041c5db  51                   push ecx
// 0041c5dc  52                   push edx
// 0041c5dd  56                   push esi
// 0041c5de  8bc8                 mov ecx, eax
// 0041c5e0  e83bfcffff           call 0x41c220
// 0041c5e5  8bc6                 mov eax, esi
// 0041c5e7  5e                   pop esi
// 0041c5e8  59                   pop ecx
// 0041c5e9  c20c00               ret 0xc
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