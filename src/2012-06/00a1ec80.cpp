// roc 2012-06 00a1ec80  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1ec80
//
// 00a1ec80  53                   push ebx
// 00a1ec81  8bc1                 mov eax, ecx
// 00a1ec83  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 00a1ec89  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 00a1ec8f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a1ec92  8b5254               mov edx, dword ptr [edx + 0x54]
// 00a1ec95  33db                 xor ebx, ebx
// 00a1ec97  81c184010000         add ecx, 0x184
// 00a1ec9d  395c2408             cmp dword ptr [esp + 8], ebx
// 00a1eca1  0f95c3               setne bl
// 00a1eca4  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 00a1eca8  53                   push ebx
// 00a1eca9  50                   push eax
// 00a1ecaa  ffd2                 call edx
// 00a1ecac  5b                   pop ebx
// 00a1ecad  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
