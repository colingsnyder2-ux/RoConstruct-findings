// roc 2009-06 00434ad0  unit: MVCXTPPropertyGridItem::?$XItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00434ad0
//
// 00434ad0  8b442408             mov eax, dword ptr [esp + 8]
// 00434ad4  d900                 fld dword ptr [eax]
// 00434ad6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00434ada  d819                 fcomp dword ptr [ecx]
// 00434adc  dfe0                 fnstsw ax
// 00434ade  f6c444               test ah, 0x44
// 00434ae1  7a08                 jp 0x434aeb
// 00434ae3  b801000000           mov eax, 1
// 00434ae8  c20800               ret 8
// 00434aeb  33c0                 xor eax, eax
// 00434aed  c20800               ret 8
// copied from an identical function in another client (function ?equal@@YGHPBM0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma float_control(precise, off)

int __stdcall equal(const float* a, const float* b)
{
    if (*a == *b)
        return 1;
    return 0;
}