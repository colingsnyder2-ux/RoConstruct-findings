// roc 2012-06 00a6f170  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f170
//
// 00a6f170  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00a6f176  85c0                 test eax, eax
// 00a6f178  7406                 je 0xa6f180
// 00a6f17a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00a6f17e  742f                 je 0xa6f1af
// 00a6f180  8b542404             mov edx, dword ptr [esp + 4]
// 00a6f184  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00a6f18a  f7d2                 not edx
// 00a6f18c  23c2                 and eax, edx
// 00a6f18e  f7d8                 neg eax
// 00a6f190  1bc0                 sbb eax, eax
// 00a6f192  83c001               add eax, 1
// 00a6f195  7418                 je 0xa6f1af
// 00a6f197  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 00a6f19d  85c9                 test ecx, ecx
// 00a6f19f  7406                 je 0xa6f1a7
// 00a6f1a1  83797800             cmp dword ptr [ecx + 0x78], 0
// 00a6f1a5  7408                 je 0xa6f1af
// 00a6f1a7  b801000000           mov eax, 1
// 00a6f1ac  c20400               ret 4
// 00a6f1af  33c0                 xor eax, eax
// 00a6f1b1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
