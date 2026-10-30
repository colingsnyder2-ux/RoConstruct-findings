// from server: 100% by auto
// roc 2008-06 007a0b60  unit: CXTColorSelectorCtrlTheme  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0b60
//
// 007a0b60  56                   push esi
// 007a0b61  8bf1                 mov esi, ecx
// 007a0b63  e8a8c8cdff           call 0x47d410
// 007a0b68  e8d3f1f3ff           call 0x6dfd40
// 007a0b6d  6a0f                 push 0xf
// 007a0b6f  8bc8                 mov ecx, eax
// 007a0b71  e8aae9f3ff           call 0x6df520
// 007a0b76  89461c               mov dword ptr [esi + 0x1c], eax
// 007a0b79  e8c2f1f3ff           call 0x6dfd40
// 007a0b7e  6a14                 push 0x14
// 007a0b80  8bc8                 mov ecx, eax
// 007a0b82  e899e9f3ff           call 0x6df520
// 007a0b87  894614               mov dword ptr [esi + 0x14], eax
// 007a0b8a  e8b1f1f3ff           call 0x6dfd40
// 007a0b8f  6a10                 push 0x10
// 007a0b91  8bc8                 mov ecx, eax
// 007a0b93  e888e9f3ff           call 0x6df520
// 007a0b98  894618               mov dword ptr [esi + 0x18], eax
// 007a0b9b  e8a0f1f3ff           call 0x6dfd40
// 007a0ba0  6a12                 push 0x12
// 007a0ba2  8bc8                 mov ecx, eax
// 007a0ba4  e877e9f3ff           call 0x6df520
// 007a0ba9  89462c               mov dword ptr [esi + 0x2c], eax
// 007a0bac  5e                   pop esi
// 007a0bad  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
