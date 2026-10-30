// roc 2009-06 007fe470  unit: CXTSplitterWndThemeOffice2003  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe470
//
// 007fe470  56                   push esi
// 007fe471  8bf1                 mov esi, ecx
// 007fe473  e8e8ffffff           call 0x7fe460
// 007fe478  e8a366f5ff           call 0x754b20
// 007fe47d  8bc8                 mov ecx, eax
// 007fe47f  e8fc60f5ff           call 0x754580
// 007fe484  85c0                 test eax, eax
// 007fe486  7547                 jne 0x7fe4cf
// 007fe488  e89366f5ff           call 0x754b20
// 007fe48d  8bc8                 mov ecx, eax
// 007fe48f  e83c64f5ff           call 0x7548d0
// 007fe494  48                   dec eax
// 007fe495  83f804               cmp eax, 4
// 007fe498  7735                 ja 0x7fe4cf
// 007fe49a  ff2485d4e47f00       jmp dword ptr [eax*4 + 0x7fe4d4]
// 007fe4a1  c74614d8e7fc00       mov dword ptr [esi + 0x14], 0xfce7d8
// 007fe4a8  c746189ebef500       mov dword ptr [esi + 0x18], 0xf5be9e
// 007fe4af  5e                   pop esi
// 007fe4b0  c3                   ret 
// 007fe4b1  c74614e2e7bf00       mov dword ptr [esi + 0x14], 0xbfe7e2
// 007fe4b8  c74618abc08a00       mov dword ptr [esi + 0x18], 0x8ac0ab
// 007fe4bf  5e                   pop esi
// 007fe4c0  c3                   ret 
// 007fe4c1  c74614dfdfea00       mov dword ptr [esi + 0x14], 0xeadfdf
// 007fe4c8  c74618b1b0c300       mov dword ptr [esi + 0x18], 0xc3b0b1
// 007fe4cf  5e                   pop esi
// 007fe4d0  c3                   ret 
// 007fe4d1  8d4900               lea ecx, [ecx]
// 007fe4d4  a1e47f00b1           mov eax, dword ptr [0xb1007fe4]
// 007fe4d9  e47f                 in al, 0x7f
// 007fe4db  00c1                 add cl, al
// 007fe4dd  e47f                 in al, 0x7f
// 007fe4df  00a1e47f00a1         add byte ptr [ecx - 0x5eff801c], ah
// 007fe4e5  e47f                 in al, 0x7f
// copied from an identical function in another client (function ?RefreshMetrics@CXTSplitterWndThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp