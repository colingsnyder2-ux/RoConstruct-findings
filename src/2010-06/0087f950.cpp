// roc 2010-06 0087f950  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f950
//
// 0087f950  56                   push esi
// 0087f951  8bf1                 mov esi, ecx
// 0087f953  e868e5ffff           call 0x87dec0
// 0087f958  e8c341f6ff           call 0x7e3b20
// 0087f95d  6a0f                 push 0xf
// 0087f95f  8bc8                 mov ecx, eax
// 0087f961  e84a39f6ff           call 0x7e32b0
// 0087f966  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087f969  894150               mov dword ptr [ecx + 0x50], eax
// 0087f96c  5e                   pop esi
// 0087f96d  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
