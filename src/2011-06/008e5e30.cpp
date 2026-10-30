// roc 2011-06 008e5e30  unit: CXTSplitterWndThemeOffice2003  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5e30
//
// 008e5e30  56                   push esi
// 008e5e31  8bf1                 mov esi, ecx
// 008e5e33  e8e8ffffff           call 0x8e5e20
// 008e5e38  e8a3f5f5ff           call 0x8453e0
// 008e5e3d  8bc8                 mov ecx, eax
// 008e5e3f  e84cf0f5ff           call 0x844e90
// 008e5e44  85c0                 test eax, eax
// 008e5e46  7547                 jne 0x8e5e8f
// 008e5e48  e893f5f5ff           call 0x8453e0
// 008e5e4d  8bc8                 mov ecx, eax
// 008e5e4f  e88cf3f5ff           call 0x8451e0
// 008e5e54  48                   dec eax
// 008e5e55  83f804               cmp eax, 4
// 008e5e58  7735                 ja 0x8e5e8f
// 008e5e5a  ff2485945e8e00       jmp dword ptr [eax*4 + 0x8e5e94]
// 008e5e61  c74614d8e7fc00       mov dword ptr [esi + 0x14], 0xfce7d8
// 008e5e68  c746189ebef500       mov dword ptr [esi + 0x18], 0xf5be9e
// 008e5e6f  5e                   pop esi
// 008e5e70  c3                   ret 
// 008e5e71  c74614e2e7bf00       mov dword ptr [esi + 0x14], 0xbfe7e2
// 008e5e78  c74618abc08a00       mov dword ptr [esi + 0x18], 0x8ac0ab
// 008e5e7f  5e                   pop esi
// 008e5e80  c3                   ret 
// 008e5e81  c74614dfdfea00       mov dword ptr [esi + 0x14], 0xeadfdf
// 008e5e88  c74618b1b0c300       mov dword ptr [esi + 0x18], 0xc3b0b1
// 008e5e8f  5e                   pop esi
// 008e5e90  c3                   ret 
// 008e5e91  8d4900               lea ecx, [ecx]
// 008e5e94  61                   popal 
// 008e5e95  5e                   pop esi
// 008e5e96  8e00                 mov es, word ptr [eax]
// 008e5e98  715e                 jno 0x8e5ef8
// 008e5e9a  8e00                 mov es, word ptr [eax]
// 008e5e9c  815e8e00615e8e       sbb dword ptr [esi - 0x72], 0x8e5e6100
// 008e5ea3  00615e               add byte ptr [ecx + 0x5e], ah
// 008e5ea6  8e00                 mov es, word ptr [eax]
// copied from an identical function in another client (function ?RefreshMetrics@CXTSplitterWndThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp