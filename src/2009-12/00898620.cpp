// roc 2009-12 00898620  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898620
//
// 00898620  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00898626  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0089862a  0584010000           add eax, 0x184
// 0089862f  85c9                 test ecx, ecx
// 00898631  7c0e                 jl 0x898641
// 00898633  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 00898636  7d09                 jge 0x898641
// 00898638  8b4058               mov eax, dword ptr [eax + 0x58]
// 0089863b  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0089863e  c20400               ret 4
// 00898641  33c0                 xor eax, eax
// 00898643  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
