// roc 2009-06 007b82b0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b82b0
//
// 007b82b0  53                   push ebx
// 007b82b1  8bc1                 mov eax, ecx
// 007b82b3  8b8868020000         mov ecx, dword ptr [eax + 0x268]
// 007b82b9  8b9184010000         mov edx, dword ptr [ecx + 0x184]
// 007b82bf  8b4020               mov eax, dword ptr [eax + 0x20]
// 007b82c2  8b5254               mov edx, dword ptr [edx + 0x54]
// 007b82c5  33db                 xor ebx, ebx
// 007b82c7  81c184010000         add ecx, 0x184
// 007b82cd  395c2408             cmp dword ptr [esp + 8], ebx
// 007b82d1  0f95c3               setne bl
// 007b82d4  8d5c1b25             lea ebx, [ebx + ebx + 0x25]
// 007b82d8  53                   push ebx
// 007b82d9  50                   push eax
// 007b82da  ffd2                 call edx
// 007b82dc  5b                   pop ebx
// 007b82dd  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SelectNextTab@CXTPRibbonBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
