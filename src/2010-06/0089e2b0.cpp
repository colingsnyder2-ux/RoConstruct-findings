// roc 2010-06 0089e2b0  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e2b0
//
// 0089e2b0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0089e2b6  85c0                 test eax, eax
// 0089e2b8  7406                 je 0x89e2c0
// 0089e2ba  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0089e2be  742f                 je 0x89e2ef
// 0089e2c0  8b542404             mov edx, dword ptr [esp + 4]
// 0089e2c4  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0089e2ca  f7d2                 not edx
// 0089e2cc  23c2                 and eax, edx
// 0089e2ce  f7d8                 neg eax
// 0089e2d0  1bc0                 sbb eax, eax
// 0089e2d2  83c001               add eax, 1
// 0089e2d5  7418                 je 0x89e2ef
// 0089e2d7  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 0089e2dd  85c9                 test ecx, ecx
// 0089e2df  7406                 je 0x89e2e7
// 0089e2e1  83797800             cmp dword ptr [ecx + 0x78], 0
// 0089e2e5  7408                 je 0x89e2ef
// 0089e2e7  b801000000           mov eax, 1
// 0089e2ec  c20400               ret 4
// 0089e2ef  33c0                 xor eax, eax
// 0089e2f1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
