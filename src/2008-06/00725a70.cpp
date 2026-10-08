// from server: 100% by auto
// roc 2008-06 00725a70  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00725a70
//
// 00725a70  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00725a76  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00725a7a  0584010000           add eax, 0x184
// 00725a7f  85c9                 test ecx, ecx
// 00725a81  7c0e                 jl 0x725a91
// 00725a83  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 00725a86  7d09                 jge 0x725a91
// 00725a88  8b4058               mov eax, dword ptr [eax + 0x58]
// 00725a8b  8b0488               mov eax, dword ptr [eax + ecx*4]
// 00725a8e  c20400               ret 4
// 00725a91  33c0                 xor eax, eax
// 00725a93  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetTab@CXTPRibbonBar@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
