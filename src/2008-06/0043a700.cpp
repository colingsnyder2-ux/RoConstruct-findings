// from server: 100% by king_originala
// roc 2008-06 0043a700  unit: MVCXTPPropertyGridItem::?$XItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a700
//
// 0043a700  8b442408             mov eax, dword ptr [esp + 8]
// 0043a704  d900                 fld dword ptr [eax]
// 0043a706  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043a70a  d819                 fcomp dword ptr [ecx]
// 0043a70c  dfe0                 fnstsw ax
// 0043a70e  f6c444               test ah, 0x44
// 0043a711  7a08                 jp 0x43a71b
// 0043a713  b801000000           mov eax, 1
// 0043a718  c20800               ret 8
// 0043a71b  33c0                 xor eax, eax
// 0043a71d  c20800               ret 8

#pragma float_control(precise, off)

int __stdcall equal(const float* a, const float* b)
{
    if (*a == *b)
        return 1;
    return 0;
}
