// roc 2010-06 0084c7b0  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084c7b0
//
// 0084c7b0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 0084c7b6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084c7ba  0584010000           add eax, 0x184
// 0084c7bf  85c9                 test ecx, ecx
// 0084c7c1  7c0e                 jl 0x84c7d1
// 0084c7c3  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 0084c7c6  7d09                 jge 0x84c7d1
// 0084c7c8  8b4058               mov eax, dword ptr [eax + 0x58]
// 0084c7cb  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0084c7ce  c20400               ret 4
// 0084c7d1  33c0                 xor eax, eax
// 0084c7d3  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
