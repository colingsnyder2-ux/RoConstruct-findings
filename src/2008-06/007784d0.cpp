// from server: 100% by auto
// roc 2008-06 007784d0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007784d0
//
// 007784d0  56                   push esi
// 007784d1  8bf1                 mov esi, ecx
// 007784d3  e848e5ffff           call 0x776a20
// 007784d8  e86378f6ff           call 0x6dfd40
// 007784dd  6a0f                 push 0xf
// 007784df  8bc8                 mov ecx, eax
// 007784e1  e83a70f6ff           call 0x6df520
// 007784e6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007784e9  894150               mov dword ptr [ecx + 0x50], eax
// 007784ec  5e                   pop esi
// 007784ed  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
