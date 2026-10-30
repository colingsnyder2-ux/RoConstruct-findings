// roc 2009-12 00895500  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895500
//
// 00895500  53                   push ebx
// 00895501  8bc1                 mov eax, ecx
// 00895503  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 00895509  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 0089550f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00895512  8b5254               mov edx, dword ptr [edx + 0x54]
// 00895515  33db                 xor ebx, ebx
// 00895517  81c184010000         add ecx, 0x184
// 0089551d  395c2408             cmp dword ptr [esp + 8], ebx
// 00895521  0f95c3               setne bl
// 00895524  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 00895528  53                   push ebx
// 00895529  50                   push eax
// 0089552a  ffd2                 call edx
// 0089552c  5b                   pop ebx
// 0089552d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
