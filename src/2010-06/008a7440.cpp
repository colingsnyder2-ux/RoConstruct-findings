// roc 2010-06 008a7440  unit: CXTColorSelectorCtrlTheme  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7440
//
// 008a7440  56                   push esi
// 008a7441  8bf1                 mov esi, ecx
// 008a7443  e868d1baff           call 0x4545b0
// 008a7448  e8d3c6f3ff           call 0x7e3b20
// 008a744d  6a0f                 push 0xf
// 008a744f  8bc8                 mov ecx, eax
// 008a7451  e85abef3ff           call 0x7e32b0
// 008a7456  89461c               mov dword ptr [esi + 0x1c], eax
// 008a7459  e8c2c6f3ff           call 0x7e3b20
// 008a745e  6a14                 push 0x14
// 008a7460  8bc8                 mov ecx, eax
// 008a7462  e849bef3ff           call 0x7e32b0
// 008a7467  894614               mov dword ptr [esi + 0x14], eax
// 008a746a  e8b1c6f3ff           call 0x7e3b20
// 008a746f  6a10                 push 0x10
// 008a7471  8bc8                 mov ecx, eax
// 008a7473  e838bef3ff           call 0x7e32b0
// 008a7478  894618               mov dword ptr [esi + 0x18], eax
// 008a747b  e8a0c6f3ff           call 0x7e3b20
// 008a7480  6a12                 push 0x12
// 008a7482  8bc8                 mov ecx, eax
// 008a7484  e827bef3ff           call 0x7e32b0
// 008a7489  89462c               mov dword ptr [esi + 0x2c], eax
// 008a748c  5e                   pop esi
// 008a748d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
