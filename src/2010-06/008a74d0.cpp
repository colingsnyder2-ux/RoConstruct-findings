// roc 2010-06 008a74d0  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a74d0
//
// 008a74d0  56                   push esi
// 008a74d1  8bf1                 mov esi, ecx
// 008a74d3  e868ffffff           call 0x8a7440
// 008a74d8  e843c6f3ff           call 0x7e3b20
// 008a74dd  6a20                 push 0x20
// 008a74df  8bc8                 mov ecx, eax
// 008a74e1  e8cabdf3ff           call 0x7e32b0
// 008a74e6  894614               mov dword ptr [esi + 0x14], eax
// 008a74e9  e832c6f3ff           call 0x7e3b20
// 008a74ee  6a20                 push 0x20
// 008a74f0  8bc8                 mov ecx, eax
// 008a74f2  e8b9bdf3ff           call 0x7e32b0
// 008a74f7  894618               mov dword ptr [esi + 0x18], eax
// 008a74fa  e821c6f3ff           call 0x7e3b20
// 008a74ff  6a29                 push 0x29
// 008a7501  8bc8                 mov ecx, eax
// 008a7503  e8a8bdf3ff           call 0x7e32b0
// 008a7508  89461c               mov dword ptr [esi + 0x1c], eax
// 008a750b  e810c6f3ff           call 0x7e3b20
// 008a7510  6a21                 push 0x21
// 008a7512  8bc8                 mov ecx, eax
// 008a7514  e897bdf3ff           call 0x7e32b0
// 008a7519  894620               mov dword ptr [esi + 0x20], eax
// 008a751c  e8ffc5f3ff           call 0x7e3b20
// 008a7521  6a1f                 push 0x1f
// 008a7523  8bc8                 mov ecx, eax
// 008a7525  e886bdf3ff           call 0x7e32b0
// 008a752a  894624               mov dword ptr [esi + 0x24], eax
// 008a752d  e8eec5f3ff           call 0x7e3b20
// 008a7532  6a24                 push 0x24
// 008a7534  8bc8                 mov ecx, eax
// 008a7536  e875bdf3ff           call 0x7e32b0
// 008a753b  894628               mov dword ptr [esi + 0x28], eax
// 008a753e  5e                   pop esi
// 008a753f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
