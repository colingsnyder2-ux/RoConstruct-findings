// roc 2009-12 008cb7e0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb7e0
//
// 008cb7e0  56                   push esi
// 008cb7e1  8bf1                 mov esi, ecx
// 008cb7e3  e808e5ffff           call 0x8c9cf0
// 008cb7e8  e8e341f6ff           call 0x82f9d0
// 008cb7ed  6a0f                 push 0xf
// 008cb7ef  8bc8                 mov ecx, eax
// 008cb7f1  e80a39f6ff           call 0x82f100
// 008cb7f6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb7f9  894174               mov dword ptr [ecx + 0x74], eax
// 008cb7fc  8b5674               mov edx, dword ptr [esi + 0x74]
// 008cb7ff  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 008cb806  5e                   pop esi
// 008cb807  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
