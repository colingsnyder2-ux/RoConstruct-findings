// from server: 100% by colin
// roc 2007-08 00719280  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719280
//
// 00719280  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00719283  33d2                 xor edx, edx
// 00719285  398874020000         cmp dword ptr [eax + 0x274], ecx
// 0071928b  0f94c2               sete dl
// 0071928e  8bc2                 mov eax, edx
// 00719290  c3                   ret 

struct CXTPRibbonBar {
    int IsFrameHelper();
};

int CXTPRibbonBar::IsFrameHelper()
{
    int* p = *(int**)((char*)this + 0x5c);
    return *(int*)((char*)p + 0x274) == (int)this;
}
