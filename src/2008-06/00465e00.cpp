// from server: 100% by king_originala
// roc 2008-06 00465e00  unit: CSelectionCaption  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465e00
//
// 00465e00  56                   push esi
// 00465e01  8bf1                 mov esi, ecx
// 00465e03  e860ae2300           call 0x6a0c68
// 00465e08  83f8ff               cmp eax, -1
// 00465e0b  7506                 jne 0x465e13
// 00465e0d  0bc0                 or eax, eax
// 00465e0f  5e                   pop esi
// 00465e10  c20400               ret 4
// 00465e13  8d8e90010000         lea ecx, [esi + 0x190]
// 00465e19  e8b2adfbff           call 0x420bd0
// 00465e1e  33c0                 xor eax, eax
// 00465e20  5e                   pop esi
// 00465e21  c20400               ret 4

struct CaptionPart
{
    void func_00420bd0();
};

struct CSelectionCaption
{
    char padding[0x190];
    CaptionPart caption;

    int func_006a0c68();
    int func_00465e00(void *);
};

int CSelectionCaption::func_00465e00(void *)
{
    int result = func_006a0c68();
    if (result == -1)
        return result;

    caption.func_00420bd0();
    return 0;
}
