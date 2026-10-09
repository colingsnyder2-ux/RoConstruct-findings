// roc 2007-03 0070e4e0  unit: seg_00700000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e4e0
//
// 0070e4e0  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0070e4e3  33d2                 xor edx, edx
// 0070e4e5  398874020000         cmp dword ptr [eax + 0x274], ecx
// 0070e4eb  0f94c2               sete dl
// 0070e4ee  8bc2                 mov eax, edx
// 0070e4f0  c3                   ret 
// copied from an identical function in another client (function ?IsFrameHelper@CXTPRibbonBar@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
struct CXTPRibbonBar {
    int IsFrameHelper();
};

int CXTPRibbonBar::IsFrameHelper()
{
    int* p = *(int**)((char*)this + 0x5c);
    return *(int*)((char*)p + 0x274) == (int)this;
}
}
