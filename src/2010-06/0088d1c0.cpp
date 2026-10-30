// roc 2010-06 0088d1c0  unit: CXTSplitterWndThemeOffice2003  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088d1c0
//
// 0088d1c0  56                   push esi
// 0088d1c1  8bf1                 mov esi, ecx
// 0088d1c3  e8e8ffffff           call 0x88d1b0
// 0088d1c8  e85369f5ff           call 0x7e3b20
// 0088d1cd  8bc8                 mov ecx, eax
// 0088d1cf  e82c7be2ff           call 0x6b4d00
// 0088d1d4  85c0                 test eax, eax
// 0088d1d6  7547                 jne 0x88d21f
// 0088d1d8  e84369f5ff           call 0x7e3b20
// 0088d1dd  8bc8                 mov ecx, eax
// 0088d1df  e8ec66f5ff           call 0x7e38d0
// 0088d1e4  48                   dec eax
// 0088d1e5  83f804               cmp eax, 4
// 0088d1e8  7735                 ja 0x88d21f
// 0088d1ea  ff248524d28800       jmp dword ptr [eax*4 + 0x88d224]
// 0088d1f1  c74614d8e7fc00       mov dword ptr [esi + 0x14], 0xfce7d8
// 0088d1f8  c746189ebef500       mov dword ptr [esi + 0x18], 0xf5be9e
// 0088d1ff  5e                   pop esi
// 0088d200  c3                   ret 
// 0088d201  c74614e2e7bf00       mov dword ptr [esi + 0x14], 0xbfe7e2
// 0088d208  c74618abc08a00       mov dword ptr [esi + 0x18], 0x8ac0ab
// 0088d20f  5e                   pop esi
// 0088d210  c3                   ret 
// 0088d211  c74614dfdfea00       mov dword ptr [esi + 0x14], 0xeadfdf
// 0088d218  c74618b1b0c300       mov dword ptr [esi + 0x18], 0xc3b0b1
// 0088d21f  5e                   pop esi
// 0088d220  c3                   ret 
// 0088d221  8d4900               lea ecx, [ecx]
// 0088d224  f1                   int1 
// 0088d225  d1880001d288         ror dword ptr [eax - 0x772dff00], 1
// 0088d22b  0011                 add byte ptr [ecx], dl
// 0088d22d  d28800f1d188         ror byte ptr [eax - 0x772e0f00], cl
// 0088d233  00f1                 add cl, dh
// copied from an identical function in another client (function ?RefreshMetrics@CXTSplitterWndThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp