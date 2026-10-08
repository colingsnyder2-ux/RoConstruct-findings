// from server: 100% by colin
// roc 2007-08 0043bba0  unit: MVCXTPPropertyGridItem::?$XItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043bba0
//
// 0043bba0  8b442404             mov eax, dword ptr [esp + 4]
// 0043bba4  d900                 fld dword ptr [eax]
// 0043bba6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043bbaa  d901                 fld dword ptr [ecx]
// 0043bbac  dae9                 fucompp 
// 0043bbae  dfe0                 fnstsw ax
// 0043bbb0  f6c444               test ah, 0x44
// 0043bbb3  7a08                 jp 0x43bbbd
// 0043bbb5  b801000000           mov eax, 1
// 0043bbba  c20800               ret 8
// 0043bbbd  33c0                 xor eax, eax
// 0043bbbf  c20800               ret 8

struct MVCXTPPropertyGridItemXItem
{
    bool equal(const float* a, const float* b) const;
};

bool MVCXTPPropertyGridItemXItem::equal(const float* a, const float* b) const
{
    return *a == *b;
}
