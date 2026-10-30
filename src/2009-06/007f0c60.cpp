// roc 2009-06 007f0c60  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0c60
//
// 007f0c60  56                   push esi
// 007f0c61  8bf1                 mov esi, ecx
// 007f0c63  e808e5ffff           call 0x7ef170
// 007f0c68  e8b33ef6ff           call 0x754b20
// 007f0c6d  6a0f                 push 0xf
// 007f0c6f  8bc8                 mov ecx, eax
// 007f0c71  e82a36f6ff           call 0x7542a0
// 007f0c76  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007f0c79  894174               mov dword ptr [ecx + 0x74], eax
// 007f0c7c  8b5674               mov edx, dword ptr [esi + 0x74]
// 007f0c7f  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 007f0c86  5e                   pop esi
// 007f0c87  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
