// roc 2009-06 00420260  unit: CRobloxTreeCtrlNode  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00420260
//
// 00420260  51                   push ecx
// 00420261  56                   push esi
// 00420262  c744240400000000     mov dword ptr [esp + 4], 0
// 0042026a  e831bdffff           call 0x41bfa0
// 0042026f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00420273  8b542410             mov edx, dword ptr [esp + 0x10]
// 00420277  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042027b  51                   push ecx
// 0042027c  52                   push edx
// 0042027d  56                   push esi
// 0042027e  8bc8                 mov ecx, eax
// 00420280  e89bfeffff           call 0x420120
// 00420285  8bc6                 mov eax, esi
// 00420287  5e                   pop esi
// 00420288  59                   pop ecx
// 00420289  c20c00               ret 0xc
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
