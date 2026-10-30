// roc 2009-06 007f0c20  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0c20
//
// 007f0c20  56                   push esi
// 007f0c21  8bf1                 mov esi, ecx
// 007f0c23  e848e5ffff           call 0x7ef170
// 007f0c28  e8f33ef6ff           call 0x754b20
// 007f0c2d  6a0f                 push 0xf
// 007f0c2f  8bc8                 mov ecx, eax
// 007f0c31  e86a36f6ff           call 0x7542a0
// 007f0c36  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f0c39  894150               mov dword ptr [ecx + 0x50], eax
// 007f0c3c  5e                   pop esi
// 007f0c3d  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
