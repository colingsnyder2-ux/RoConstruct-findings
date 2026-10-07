// roc 2008-06 00722950  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722950
//
// 00722950  53                   push ebx
// 00722951  8bc1                 mov eax, ecx
// 00722953  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 00722959  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 0072295f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00722962  8b5254               mov edx, dword ptr [edx + 0x54]
// 00722965  33db                 xor ebx, ebx
// 00722967  81c184010000         add ecx, 0x184
// 0072296d  395c2408             cmp dword ptr [esp + 8], ebx
// 00722971  0f95c3               setne bl
// 00722974  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 00722978  53                   push ebx
// 00722979  50                   push eax
// 0072297a  ffd2                 call edx
// 0072297c  5b                   pop ebx
// 0072297d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
