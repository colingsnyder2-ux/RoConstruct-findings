// roc 2012-06 00a5b960  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b960
//
// 00a5b960  56                   push esi
// 00a5b961  8bf1                 mov esi, ecx
// 00a5b963  e848e5ffff           call 0xa59eb0
// 00a5b968  e8f31ef6ff           call 0x9bd860
// 00a5b96d  6a0f                 push 0xf
// 00a5b96f  8bc8                 mov ecx, eax
// 00a5b971  e86a16f6ff           call 0x9bcfe0
// 00a5b976  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00a5b979  894150               mov dword ptr [ecx + 0x50], eax
// 00a5b97c  5e                   pop esi
// 00a5b97d  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
