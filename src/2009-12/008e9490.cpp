// roc 2009-12 008e9490  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9490
//
// 008e9490  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 008e9496  85c0                 test eax, eax
// 008e9498  7406                 je 0x8e94a0
// 008e949a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008e949e  742f                 je 0x8e94cf
// 008e94a0  8b542404             mov edx, dword ptr [esp + 4]
// 008e94a4  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008e94aa  f7d2                 not edx
// 008e94ac  23c2                 and eax, edx
// 008e94ae  f7d8                 neg eax
// 008e94b0  1bc0                 sbb eax, eax
// 008e94b2  83c001               add eax, 1
// 008e94b5  7418                 je 0x8e94cf
// 008e94b7  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 008e94bd  85c9                 test ecx, ecx
// 008e94bf  7406                 je 0x8e94c7
// 008e94c1  83797800             cmp dword ptr [ecx + 0x78], 0
// 008e94c5  7408                 je 0x8e94cf
// 008e94c7  b801000000           mov eax, 1
// 008e94cc  c20400               ret 4
// 008e94cf  33c0                 xor eax, eax
// 008e94d1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
