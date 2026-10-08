// roc 2011-06 008e3640  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3640
//
// 008e3640  56                   push esi
// 008e3641  8bf1                 mov esi, ecx
// 008e3643  e808e5ffff           call 0x8e1b50
// 008e3648  e8931df6ff           call 0x8453e0
// 008e364d  6a0f                 push 0xf
// 008e364f  8bc8                 mov ecx, eax
// 008e3651  e85a15f6ff           call 0x844bb0
// 008e3656  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008e3659  894174               mov dword ptr [ecx + 0x74], eax
// 008e365c  8b5674               mov edx, dword ptr [esi + 0x74]
// 008e365f  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 008e3666  5e                   pop esi
// 008e3667  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
