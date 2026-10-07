// roc 2008-06 00776300  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776300
//
// 00776300  83c8ff               or eax, 0xffffffff
// 00776303  89413c               mov dword ptr [ecx + 0x3c], eax
// 00776306  894148               mov dword ptr [ecx + 0x48], eax
// 00776309  894154               mov dword ptr [ecx + 0x54], eax
// 0077630c  894178               mov dword ptr [ecx + 0x78], eax
// 0077630f  894160               mov dword ptr [ecx + 0x60], eax
// 00776312  898184000000         mov dword ptr [ecx + 0x84], eax
// 00776318  89416c               mov dword ptr [ecx + 0x6c], eax
// 0077631b  898190000000         mov dword ptr [ecx + 0x90], eax
// 00776321  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
