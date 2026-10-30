// roc 2007-03 006d9010  unit: seg_006d0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d9010
//
// 006d9010  83c8ff               or eax, 0xffffffff
// 006d9013  89413c               mov dword ptr [ecx + 0x3c], eax
// 006d9016  894148               mov dword ptr [ecx + 0x48], eax
// 006d9019  894154               mov dword ptr [ecx + 0x54], eax
// 006d901c  894178               mov dword ptr [ecx + 0x78], eax
// 006d901f  894160               mov dword ptr [ecx + 0x60], eax
// 006d9022  898184000000         mov dword ptr [ecx + 0x84], eax
// 006d9028  89416c               mov dword ptr [ecx + 0x6c], eax
// 006d902b  898190000000         mov dword ptr [ecx + 0x90], eax
// 006d9031  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
