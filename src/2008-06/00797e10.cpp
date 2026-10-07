// roc 2008-06 00797e10  unit: CXTPRibbonGroupControlPopup  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797e10
//
// 00797e10  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00797e16  85c0                 test eax, eax
// 00797e18  7406                 je 0x797e20
// 00797e1a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00797e1e  742f                 je 0x797e4f
// 00797e20  8b542404             mov edx, dword ptr [esp + 4]
// 00797e24  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00797e2a  f7d2                 not edx
// 00797e2c  23c2                 and eax, edx
// 00797e2e  f7d8                 neg eax
// 00797e30  1bc0                 sbb eax, eax
// 00797e32  83c001               add eax, 1
// 00797e35  7418                 je 0x797e4f
// 00797e37  8b8984010000         mov ecx, dword ptr [ecx + 0x184]
// 00797e3d  85c9                 test ecx, ecx
// 00797e3f  7406                 je 0x797e47
// 00797e41  83797800             cmp dword ptr [ecx + 0x78], 0
// 00797e45  7408                 je 0x797e4f
// 00797e47  b801000000           mov eax, 1
// 00797e4c  c20400               ret 4
// 00797e4f  33c0                 xor eax, eax
// 00797e51  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsVisible@CXTPRibbonGroupControlPopup@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
