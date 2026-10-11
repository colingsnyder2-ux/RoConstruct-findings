// from server: 100% by tester
// roc 2008-06 0044e6b0  unit: CRobloxControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e6b0
//
// 0044e6b0  56                   push esi
// 0044e6b1  8b742408             mov esi, dword ptr [esp + 8]
// 0044e6b5  57                   push edi
// 0044e6b6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044e6ba  3bf7                 cmp esi, edi
// 0044e6bc  7412                 je 0x44e6d0
// 0044e6be  8bff                 mov edi, edi
// 0044e6c0  8d4e08               lea ecx, [esi + 8]
// 0044e6c3  ff15143f8000         call dword ptr [0x803f14]
// 0044e6c9  83c60c               add esi, 0xc
// 0044e6cc  3bf7                 cmp esi, edi
// 0044e6ce  75f0                 jne 0x44e6c0
// 0044e6d0  5f                   pop edi
// 0044e6d1  5e                   pop esi
// 0044e6d2  c20800               ret 8

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
