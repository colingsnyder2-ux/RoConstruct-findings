// roc 2010-06 00421270  unit: CRobloxTreeCtrlNode  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00421270
//
// 00421270  51                   push ecx
// 00421271  56                   push esi
// 00421272  c744240400000000     mov dword ptr [esp + 4], 0
// 0042127a  e891b2ffff           call 0x41c510
// 0042127f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00421283  8b542410             mov edx, dword ptr [esp + 0x10]
// 00421287  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042128b  51                   push ecx
// 0042128c  52                   push edx
// 0042128d  56                   push esi
// 0042128e  8bc8                 mov ecx, eax
// 00421290  e89bfeffff           call 0x421130
// 00421295  8bc6                 mov eax, esi
// 00421297  5e                   pop esi
// 00421298  59                   pop ecx
// 00421299  c20c00               ret 0xc
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