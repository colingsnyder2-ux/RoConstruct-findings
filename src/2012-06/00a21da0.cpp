// roc 2012-06 00a21da0  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a21da0
//
// 00a21da0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00a21da6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a21daa  0584010000           add eax, 0x184
// 00a21daf  85c9                 test ecx, ecx
// 00a21db1  7c0e                 jl 0xa21dc1
// 00a21db3  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 00a21db6  7d09                 jge 0xa21dc1
// 00a21db8  8b4058               mov eax, dword ptr [eax + 0x58]
// 00a21dbb  8b0488               mov eax, dword ptr [eax + ecx*4]
// 00a21dbe  c20400               ret 4
// 00a21dc1  33c0                 xor eax, eax
// 00a21dc3  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
