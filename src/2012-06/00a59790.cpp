// roc 2012-06 00a59790  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a59790
//
// 00a59790  83c8ff               or eax, 0xffffffff
// 00a59793  89413c               mov dword ptr [ecx + 0x3c], eax
// 00a59796  894148               mov dword ptr [ecx + 0x48], eax
// 00a59799  894154               mov dword ptr [ecx + 0x54], eax
// 00a5979c  894178               mov dword ptr [ecx + 0x78], eax
// 00a5979f  894160               mov dword ptr [ecx + 0x60], eax
// 00a597a2  898184000000         mov dword ptr [ecx + 0x84], eax
// 00a597a8  89416c               mov dword ptr [ecx + 0x6c], eax
// 00a597ab  898190000000         mov dword ptr [ecx + 0x90], eax
// 00a597b1  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
