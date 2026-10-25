// from server: 100% by tester
// roc 2011-06 0046d510  unit: CRobloxControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d510
//
// 0046d510  56                   push esi
// 0046d511  8b742408             mov esi, dword ptr [esp + 8]
// 0046d515  57                   push edi
// 0046d516  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046d51a  3bf7                 cmp esi, edi
// 0046d51c  7412                 je 0x46d530
// 0046d51e  8bff                 mov edi, edi
// 0046d520  8d4e08               lea ecx, [esi + 8]
// 0046d523  ff15082ea400         call dword ptr [0xa42e08]
// 0046d529  83c60c               add esi, 0xc
// 0046d52c  3bf7                 cmp esi, edi
// 0046d52e  75f0                 jne 0x46d520
// 0046d530  5f                   pop edi
// 0046d531  5e                   pop esi
// 0046d532  c20800               ret 8

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
