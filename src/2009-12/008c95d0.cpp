// roc 2009-12 008c95d0  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c95d0
//
// 008c95d0  83c8ff               or eax, 0xffffffff
// 008c95d3  89413c               mov dword ptr [ecx + 0x3c], eax
// 008c95d6  894148               mov dword ptr [ecx + 0x48], eax
// 008c95d9  894154               mov dword ptr [ecx + 0x54], eax
// 008c95dc  894178               mov dword ptr [ecx + 0x78], eax
// 008c95df  894160               mov dword ptr [ecx + 0x60], eax
// 008c95e2  898184000000         mov dword ptr [ecx + 0x84], eax
// 008c95e8  89416c               mov dword ptr [ecx + 0x6c], eax
// 008c95eb  898190000000         mov dword ptr [ecx + 0x90], eax
// 008c95f1  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
