// roc 2010-06 00849690  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849690
//
// 00849690  53                   push ebx
// 00849691  8bc1                 mov eax, ecx
// 00849693  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 00849699  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 0084969f  8b4020               mov eax, dword ptr [eax + 0x20]
// 008496a2  8b5254               mov edx, dword ptr [edx + 0x54]
// 008496a5  33db                 xor ebx, ebx
// 008496a7  81c184010000         add ecx, 0x184
// 008496ad  395c2408             cmp dword ptr [esp + 8], ebx
// 008496b1  0f95c3               setne bl
// 008496b4  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 008496b8  53                   push ebx
// 008496b9  50                   push eax
// 008496ba  ffd2                 call edx
// 008496bc  5b                   pop ebx
// 008496bd  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
