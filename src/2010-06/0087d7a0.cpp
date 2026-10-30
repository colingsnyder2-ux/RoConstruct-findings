// roc 2010-06 0087d7a0  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087d7a0
//
// 0087d7a0  83c8ff               or eax, 0xffffffff
// 0087d7a3  89413c               mov dword ptr [ecx + 0x3c], eax
// 0087d7a6  894148               mov dword ptr [ecx + 0x48], eax
// 0087d7a9  894154               mov dword ptr [ecx + 0x54], eax
// 0087d7ac  894178               mov dword ptr [ecx + 0x78], eax
// 0087d7af  894160               mov dword ptr [ecx + 0x60], eax
// 0087d7b2  898184000000         mov dword ptr [ecx + 0x84], eax
// 0087d7b8  89416c               mov dword ptr [ecx + 0x6c], eax
// 0087d7bb  898190000000         mov dword ptr [ecx + 0x90], eax
// 0087d7c1  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
