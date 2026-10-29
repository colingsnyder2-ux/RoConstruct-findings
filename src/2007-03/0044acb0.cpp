// from server: 100% by tester
// roc 2007-03 0044acb0  unit: seg_00440000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044acb0
//
// 0044acb0  56                   push esi
// 0044acb1  8b742408             mov esi, dword ptr [esp + 8]
// 0044acb5  57                   push edi
// 0044acb6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044acba  3bf7                 cmp esi, edi
// 0044acbc  7412                 je 0x44acd0
// 0044acbe  8bff                 mov edi, edi
// 0044acc0  8d4e08               lea ecx, [esi + 8]
// 0044acc3  ff1578dd7700         call dword ptr [0x77dd78]
// 0044acc9  83c60c               add esi, 0xc
// 0044accc  3bf7                 cmp esi, edi
// 0044acce  75f0                 jne 0x44acc0
// 0044acd0  5f                   pop edi
// 0044acd1  5e                   pop esi
// 0044acd2  c20800               ret 8

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
