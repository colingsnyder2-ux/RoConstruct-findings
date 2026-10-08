// roc 2009-06 0080e9b0  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e9b0
//
// 0080e9b0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0080e9b6  85c0                 test eax, eax
// 0080e9b8  7406                 je 0x80e9c0
// 0080e9ba  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0080e9be  742f                 je 0x80e9ef
// 0080e9c0  8b542404             mov edx, dword ptr [esp + 4]
// 0080e9c4  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0080e9ca  f7d2                 not edx
// 0080e9cc  23c2                 and eax, edx
// 0080e9ce  f7d8                 neg eax
// 0080e9d0  1bc0                 sbb eax, eax
// 0080e9d2  83c001               add eax, 1
// 0080e9d5  7418                 je 0x80e9ef
// 0080e9d7  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 0080e9dd  85c9                 test ecx, ecx
// 0080e9df  7406                 je 0x80e9e7
// 0080e9e1  83797800             cmp dword ptr [ecx + 0x78], 0
// 0080e9e5  7408                 je 0x80e9ef
// 0080e9e7  b801000000           mov eax, 1
// 0080e9ec  c20400               ret 4
// 0080e9ef  33c0                 xor eax, eax
// 0080e9f1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
