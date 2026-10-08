// roc 2009-06 008186e0  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008186e0
//
// 008186e0  56                   push esi
// 008186e1  8bf1                 mov esi, ecx
// 008186e3  e868ffffff           call 0x818650
// 008186e8  e833c4f3ff           call 0x754b20
// 008186ed  6a20                 push 0x20
// 008186ef  8bc8                 mov ecx, eax
// 008186f1  e8aabbf3ff           call 0x7542a0
// 008186f6  894614               mov dword ptr [esi + 0x14], eax
// 008186f9  e822c4f3ff           call 0x754b20
// 008186fe  6a20                 push 0x20
// 00818700  8bc8                 mov ecx, eax
// 00818702  e899bbf3ff           call 0x7542a0
// 00818707  894618               mov dword ptr [esi + 0x18], eax
// 0081870a  e811c4f3ff           call 0x754b20
// 0081870f  6a29                 push 0x29
// 00818711  8bc8                 mov ecx, eax
// 00818713  e888bbf3ff           call 0x7542a0
// 00818718  89461c               mov dword ptr [esi + 0x1c], eax
// 0081871b  e800c4f3ff           call 0x754b20
// 00818720  6a21                 push 0x21
// 00818722  8bc8                 mov ecx, eax
// 00818724  e877bbf3ff           call 0x7542a0
// 00818729  894620               mov dword ptr [esi + 0x20], eax
// 0081872c  e8efc3f3ff           call 0x754b20
// 00818731  6a1f                 push 0x1f
// 00818733  8bc8                 mov ecx, eax
// 00818735  e866bbf3ff           call 0x7542a0
// 0081873a  894624               mov dword ptr [esi + 0x24], eax
// 0081873d  e8dec3f3ff           call 0x754b20
// 00818742  6a24                 push 0x24
// 00818744  8bc8                 mov ecx, eax
// 00818746  e855bbf3ff           call 0x7542a0
// 0081874b  894628               mov dword ptr [esi + 0x28], eax
// 0081874e  5e                   pop esi
// 0081874f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
