// roc 2009-06 007f0cb0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0cb0
//
// 007f0cb0  56                   push esi
// 007f0cb1  8bf1                 mov esi, ecx
// 007f0cb3  e8b8e4ffff           call 0x7ef170
// 007f0cb8  e8633ef6ff           call 0x754b20
// 007f0cbd  6a12                 push 0x12
// 007f0cbf  8bc8                 mov ecx, eax
// 007f0cc1  e8da35f6ff           call 0x7542a0
// 007f0cc6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f0cc9  894168               mov dword ptr [ecx + 0x68], eax
// 007f0ccc  e84f3ef6ff           call 0x754b20
// 007f0cd1  6a1e                 push 0x1e
// 007f0cd3  8bc8                 mov ecx, eax
// 007f0cd5  e8c635f6ff           call 0x7542a0
// 007f0cda  8b5674               mov edx, dword ptr [esi + 0x74]
// 007f0cdd  894250               mov dword ptr [edx + 0x50], eax
// 007f0ce0  5e                   pop esi
// 007f0ce1  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
