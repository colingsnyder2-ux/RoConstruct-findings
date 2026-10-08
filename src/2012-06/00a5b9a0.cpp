// roc 2012-06 00a5b9a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b9a0
//
// 00a5b9a0  56                   push esi
// 00a5b9a1  8bf1                 mov esi, ecx
// 00a5b9a3  e808e5ffff           call 0xa59eb0
// 00a5b9a8  e8b31ef6ff           call 0x9bd860
// 00a5b9ad  6a0f                 push 0xf
// 00a5b9af  8bc8                 mov ecx, eax
// 00a5b9b1  e82a16f6ff           call 0x9bcfe0
// 00a5b9b6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00a5b9b9  894174               mov dword ptr [ecx + 0x74], eax
// 00a5b9bc  8b5674               mov edx, dword ptr [esi + 0x74]
// 00a5b9bf  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 00a5b9c6  5e                   pop esi
// 00a5b9c7  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
