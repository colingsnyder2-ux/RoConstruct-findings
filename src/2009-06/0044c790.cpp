// from server: 100% by tester
// roc 2009-06 0044c790  unit: CRobloxControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c790
//
// 0044c790  56                   push esi
// 0044c791  8b742408             mov esi, dword ptr [esp + 8]
// 0044c795  57                   push edi
// 0044c796  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044c79a  3bf7                 cmp esi, edi
// 0044c79c  7412                 je 0x44c7b0
// 0044c79e  8bff                 mov edi, edi
// 0044c7a0  8d4e08               lea ecx, [esi + 8]
// 0044c7a3  ff1510fd8900         call dword ptr [0x89fd10]
// 0044c7a9  83c60c               add esi, 0xc
// 0044c7ac  3bf7                 cmp esi, edi
// 0044c7ae  75f0                 jne 0x44c7a0
// 0044c7b0  5f                   pop edi
// 0044c7b1  5e                   pop esi
// 0044c7b2  c20800               ret 8

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
