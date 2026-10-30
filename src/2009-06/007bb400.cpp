// roc 2009-06 007bb400  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bb400
//
// 007bb400  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 007bb406  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007bb40a  0584010000           add eax, 0x184
// 007bb40f  85c9                 test ecx, ecx
// 007bb411  7c0e                 jl 0x7bb421
// 007bb413  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 007bb416  7d09                 jge 0x7bb421
// 007bb418  8b4058               mov eax, dword ptr [eax + 0x58]
// 007bb41b  8b0488               mov eax, dword ptr [eax + ecx*4]
// 007bb41e  c20400               ret 4
// 007bb421  33c0                 xor eax, eax
// 007bb423  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
