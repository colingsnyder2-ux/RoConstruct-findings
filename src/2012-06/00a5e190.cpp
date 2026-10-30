// roc 2012-06 00a5e190  unit: CXTSplitterWndThemeOffice2003  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e190
//
// 00a5e190  56                   push esi
// 00a5e191  8bf1                 mov esi, ecx
// 00a5e193  e8e8ffffff           call 0xa5e180
// 00a5e198  e8c3f6f5ff           call 0x9bd860
// 00a5e19d  8bc8                 mov ecx, eax
// 00a5e19f  e81cf1f5ff           call 0x9bd2c0
// 00a5e1a4  85c0                 test eax, eax
// 00a5e1a6  7547                 jne 0xa5e1ef
// 00a5e1a8  e8b3f6f5ff           call 0x9bd860
// 00a5e1ad  8bc8                 mov ecx, eax
// 00a5e1af  e85cf4f5ff           call 0x9bd610
// 00a5e1b4  48                   dec eax
// 00a5e1b5  83f804               cmp eax, 4
// 00a5e1b8  7735                 ja 0xa5e1ef
// 00a5e1ba  ff2485f4e1a500       jmp dword ptr [eax*4 + 0xa5e1f4]
// 00a5e1c1  c74614d8e7fc00       mov dword ptr [esi + 0x14], 0xfce7d8
// 00a5e1c8  c746189ebef500       mov dword ptr [esi + 0x18], 0xf5be9e
// 00a5e1cf  5e                   pop esi
// 00a5e1d0  c3                   ret 
// 00a5e1d1  c74614e2e7bf00       mov dword ptr [esi + 0x14], 0xbfe7e2
// 00a5e1d8  c74618abc08a00       mov dword ptr [esi + 0x18], 0x8ac0ab
// 00a5e1df  5e                   pop esi
// 00a5e1e0  c3                   ret 
// 00a5e1e1  c74614dfdfea00       mov dword ptr [esi + 0x14], 0xeadfdf
// 00a5e1e8  c74618b1b0c300       mov dword ptr [esi + 0x18], 0xc3b0b1
// 00a5e1ef  5e                   pop esi
// 00a5e1f0  c3                   ret 
// 00a5e1f1  8d4900               lea ecx, [ecx]
// 00a5e1f4  c1e1a5               shl ecx, 0xa5
// 00a5e1f7  00d1                 add cl, dl
// 00a5e1f9  e1a5                 loope 0xa5e1a0
// 00a5e1fb  00e1                 add cl, ah
// 00a5e1fd  e1a5                 loope 0xa5e1a4
// 00a5e1ff  00c1                 add cl, al
// 00a5e201  e1a5                 loope 0xa5e1a8
// 00a5e203  00c1                 add cl, al
// 00a5e205  e1a5                 loope 0xa5e1ac
// copied from an identical function in another client (function ?RefreshMetrics@CXTSplitterWndThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp