// roc 2009-06 007eea50  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eea50
//
// 007eea50  83c8ff               or eax, 0xffffffff
// 007eea53  89413c               mov dword ptr [ecx + 0x3c], eax
// 007eea56  894148               mov dword ptr [ecx + 0x48], eax
// 007eea59  894154               mov dword ptr [ecx + 0x54], eax
// 007eea5c  894178               mov dword ptr [ecx + 0x78], eax
// 007eea5f  894160               mov dword ptr [ecx + 0x60], eax
// 007eea62  898184000000         mov dword ptr [ecx + 0x84], eax
// 007eea68  89416c               mov dword ptr [ecx + 0x6c], eax
// 007eea6b  898190000000         mov dword ptr [ecx + 0x90], eax
// 007eea71  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
