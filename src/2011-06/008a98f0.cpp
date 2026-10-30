// roc 2011-06 008a98f0  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a98f0
//
// 008a98f0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 008a98f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a98fa  0584010000           add eax, 0x184
// 008a98ff  85c9                 test ecx, ecx
// 008a9901  7c0e                 jl 0x8a9911
// 008a9903  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 008a9906  7d09                 jge 0x8a9911
// 008a9908  8b4058               mov eax, dword ptr [eax + 0x58]
// 008a990b  8b0488               mov eax, dword ptr [eax + ecx*4]
// 008a990e  c20400               ret 4
// 008a9911  33c0                 xor eax, eax
// 008a9913  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
