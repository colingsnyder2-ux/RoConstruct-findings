// roc 2009-12 008cb780  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridCoolTheme  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb780
//
// 008cb780  56                   push esi
// 008cb781  8bf1                 mov esi, ecx
// 008cb783  e868e5ffff           call 0x8c9cf0
// 008cb788  e84342f6ff           call 0x82f9d0
// 008cb78d  6a0f                 push 0xf
// 008cb78f  8bc8                 mov ecx, eax
// 008cb791  e86a39f6ff           call 0x82f100
// 008cb796  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb799  894150               mov dword ptr [ecx + 0x50], eax
// 008cb79c  5e                   pop esi
// 008cb79d  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridCoolTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
