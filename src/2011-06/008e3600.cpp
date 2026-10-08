// roc 2011-06 008e3600  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3600
//
// 008e3600  56                   push esi
// 008e3601  8bf1                 mov esi, ecx
// 008e3603  e848e5ffff           call 0x8e1b50
// 008e3608  e8d31df6ff           call 0x8453e0
// 008e360d  6a0f                 push 0xf
// 008e360f  8bc8                 mov ecx, eax
// 008e3611  e89a15f6ff           call 0x844bb0
// 008e3616  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008e3619  894150               mov dword ptr [ecx + 0x50], eax
// 008e361c  5e                   pop esi
// 008e361d  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
