// roc 2011-06 008a67d0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a67d0
//
// 008a67d0  53                   push ebx
// 008a67d1  8bc1                 mov eax, ecx
// 008a67d3  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 008a67d9  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 008a67df  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a67e2  8b5254               mov edx, dword ptr [edx + 0x54]
// 008a67e5  33db                 xor ebx, ebx
// 008a67e7  81c184010000         add ecx, 0x184
// 008a67ed  395c2408             cmp dword ptr [esp + 8], ebx
// 008a67f1  0f95c3               setne bl
// 008a67f4  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 008a67f8  53                   push ebx
// 008a67f9  50                   push eax
// 008a67fa  ffd2                 call edx
// 008a67fc  5b                   pop ebx
// 008a67fd  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
