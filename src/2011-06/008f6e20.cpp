// roc 2011-06 008f6e20  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6e20
//
// 008f6e20  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 008f6e26  85c0                 test eax, eax
// 008f6e28  7406                 je 0x8f6e30
// 008f6e2a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008f6e2e  742f                 je 0x8f6e5f
// 008f6e30  8b542404             mov edx, dword ptr [esp + 4]
// 008f6e34  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008f6e3a  f7d2                 not edx
// 008f6e3c  23c2                 and eax, edx
// 008f6e3e  f7d8                 neg eax
// 008f6e40  1bc0                 sbb eax, eax
// 008f6e42  83c001               add eax, 1
// 008f6e45  7418                 je 0x8f6e5f
// 008f6e47  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 008f6e4d  85c9                 test ecx, ecx
// 008f6e4f  7406                 je 0x8f6e57
// 008f6e51  83797800             cmp dword ptr [ecx + 0x78], 0
// 008f6e55  7408                 je 0x8f6e5f
// 008f6e57  b801000000           mov eax, 1
// 008f6e5c  c20400               ret 4
// 008f6e5f  33c0                 xor eax, eax
// 008f6e61  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
