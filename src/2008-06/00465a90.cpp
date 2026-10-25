// from server: 100% by king_originala
// roc 2008-06 00465a90  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465a90
//
// 00465a90  8b442408             mov eax, dword ptr [esp + 8]
// 00465a94  3d78eaffff           cmp eax, 0xffffea78
// 00465a99  7409                 je 0x465aa4
// 00465a9b  89442408             mov dword ptr [esp + 8], eax
// 00465a9f  e950ad2300           jmp 0x6a07f4
// 00465aa4  80b9f400000000       cmp byte ptr [ecx + 0xf4], 0
// 00465aab  7419                 je 0x465ac6
// 00465aad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00465ab1  b903000000           mov ecx, 3
// 00465ab6  668908               mov word ptr [eax], cx
// 00465ab9  c7400830170000       mov dword ptr [eax + 8], 0x1730
// 00465ac0  8d41fe               lea eax, [ecx - 2]
// 00465ac3  c20c00               ret 0xc
// 00465ac6  c744240878eaffff     mov dword ptr [esp + 8], 0xffffea78
// 00465ace  e921ad2300           jmp 0x6a07f4

struct Variant
{
    unsigned short type;
    unsigned short reserved[3];
    unsigned long value;
    unsigned long extra;
};

struct S
{
    unsigned char padding[0xF4];
    unsigned char enabled;

    int fallback(void* site, long id, Variant* result);
    int f(void* site, long id, Variant* result);
};

int S::f(void* site, long id, Variant* result)
{
    if (id != -5512)
        return fallback(site, id, result);

    if (enabled)
    {
        result->type = 3;
        result->value = 0x1730;
        return 1;
    }

    return fallback(site, -5512, result);
}
