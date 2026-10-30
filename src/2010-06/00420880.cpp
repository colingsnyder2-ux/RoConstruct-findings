// roc 2010-06 00420880  unit: CSelectionTreeCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00420880
//
// 00420880  51                   push ecx
// 00420881  56                   push esi
// 00420882  c744240400000000     mov dword ptr [esp + 4], 0
// 0042088a  e8b1feffff           call 0x420740
// 0042088f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00420893  8b542410             mov edx, dword ptr [esp + 0x10]
// 00420897  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042089b  51                   push ecx
// 0042089c  52                   push edx
// 0042089d  56                   push esi
// 0042089e  8bc8                 mov ecx, eax
// 004208a0  e8dbfbffff           call 0x420480
// 004208a5  8bc6                 mov eax, esi
// 004208a7  5e                   pop esi
// 004208a8  59                   pop ecx
// 004208a9  c20c00               ret 0xc
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