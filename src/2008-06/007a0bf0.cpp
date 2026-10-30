// from server: 100% by auto
// roc 2008-06 007a0bf0  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0bf0
//
// 007a0bf0  56                   push esi
// 007a0bf1  8bf1                 mov esi, ecx
// 007a0bf3  e868ffffff           call 0x7a0b60
// 007a0bf8  e843f1f3ff           call 0x6dfd40
// 007a0bfd  6a20                 push 0x20
// 007a0bff  8bc8                 mov ecx, eax
// 007a0c01  e81ae9f3ff           call 0x6df520
// 007a0c06  894614               mov dword ptr [esi + 0x14], eax
// 007a0c09  e832f1f3ff           call 0x6dfd40
// 007a0c0e  6a20                 push 0x20
// 007a0c10  8bc8                 mov ecx, eax
// 007a0c12  e809e9f3ff           call 0x6df520
// 007a0c17  894618               mov dword ptr [esi + 0x18], eax
// 007a0c1a  e821f1f3ff           call 0x6dfd40
// 007a0c1f  6a29                 push 0x29
// 007a0c21  8bc8                 mov ecx, eax
// 007a0c23  e8f8e8f3ff           call 0x6df520
// 007a0c28  89461c               mov dword ptr [esi + 0x1c], eax
// 007a0c2b  e810f1f3ff           call 0x6dfd40
// 007a0c30  6a21                 push 0x21
// 007a0c32  8bc8                 mov ecx, eax
// 007a0c34  e8e7e8f3ff           call 0x6df520
// 007a0c39  894620               mov dword ptr [esi + 0x20], eax
// 007a0c3c  e8fff0f3ff           call 0x6dfd40
// 007a0c41  6a1f                 push 0x1f
// 007a0c43  8bc8                 mov ecx, eax
// 007a0c45  e8d6e8f3ff           call 0x6df520
// 007a0c4a  894624               mov dword ptr [esi + 0x24], eax
// 007a0c4d  e8eef0f3ff           call 0x6dfd40
// 007a0c52  6a24                 push 0x24
// 007a0c54  8bc8                 mov ecx, eax
// 007a0c56  e8c5e8f3ff           call 0x6df520
// 007a0c5b  894628               mov dword ptr [esi + 0x28], eax
// 007a0c5e  5e                   pop esi
// 007a0c5f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
