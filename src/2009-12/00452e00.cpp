// roc 2009-12 00452e00  unit: CRobloxControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452e00
//
// 00452e00  56                   push esi
// 00452e01  8b742408             mov esi, dword ptr [esp + 8]
// 00452e05  57                   push edi
// 00452e06  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00452e0a  3bf7                 cmp esi, edi
// 00452e0c  7412                 je 0x452e20
// 00452e0e  8bff                 mov edi, edi
// 00452e10  8d4e08               lea ecx, [esi + 8]
// 00452e13  ff15c0de9800         call dword ptr [0x98dec0]
// 00452e19  83c60c               add esi, 0xc
// 00452e1c  3bf7                 cmp esi, edi
// 00452e1e  75f0                 jne 0x452e10
// 00452e20  5f                   pop edi
// 00452e21  5e                   pop esi
// 00452e22  c20800               ret 8
// copied from an identical function in another client (function ?f@CRobloxControlMaterialSelector@ns_ROCX000009@@QAEXPAX0@Z)

namespace ns_ROCX000009 {
// from server: 100% by atomic.potato
typedef void *(__thiscall *Fn)(void *);

extern Fn g_fn_009ecef0;

struct CRobloxControlMaterialSelector
{
    void f(void *, void *);
};

void CRobloxControlMaterialSelector::f(void *first, void *last)
{
    char *p = (char *)first;
    char *end = (char *)last;
    while (p != end)
    {
        g_fn_009ecef0(p + 8);
        p += 12;
    }
}
}
