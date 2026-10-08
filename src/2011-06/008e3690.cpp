// roc 2011-06 008e3690  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3690
//
// 008e3690  56                   push esi
// 008e3691  8bf1                 mov esi, ecx
// 008e3693  e8b8e4ffff           call 0x8e1b50
// 008e3698  e8431df6ff           call 0x8453e0
// 008e369d  6a12                 push 0x12
// 008e369f  8bc8                 mov ecx, eax
// 008e36a1  e80a15f6ff           call 0x844bb0
// 008e36a6  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008e36a9  894168               mov dword ptr [ecx + 0x68], eax
// 008e36ac  e82f1df6ff           call 0x8453e0
// 008e36b1  6a1e                 push 0x1e
// 008e36b3  8bc8                 mov ecx, eax
// 008e36b5  e8f614f6ff           call 0x844bb0
// 008e36ba  8b5674               mov edx, dword ptr [esi + 0x74]
// 008e36bd  894250               mov dword ptr [edx + 0x50], eax
// 008e36c0  5e                   pop esi
// 008e36c1  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
