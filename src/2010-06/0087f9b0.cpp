// roc 2010-06 0087f9b0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f9b0
//
// 0087f9b0  56                   push esi
// 0087f9b1  8bf1                 mov esi, ecx
// 0087f9b3  e808e5ffff           call 0x87dec0
// 0087f9b8  e86341f6ff           call 0x7e3b20
// 0087f9bd  6a0f                 push 0xf
// 0087f9bf  8bc8                 mov ecx, eax
// 0087f9c1  e8ea38f6ff           call 0x7e32b0
// 0087f9c6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087f9c9  894174               mov dword ptr [ecx + 0x74], eax
// 0087f9cc  8b5674               mov edx, dword ptr [esi + 0x74]
// 0087f9cf  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 0087f9d6  5e                   pop esi
// 0087f9d7  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
