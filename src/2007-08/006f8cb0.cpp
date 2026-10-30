// from server: 100% by auto
// roc 2007-08 006f8cb0  unit: CXTPPropertyGridItemMetrics  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8cb0
//
// 006f8cb0  83c8ff               or eax, 0xffffffff
// 006f8cb3  89413c               mov dword ptr [ecx + 0x3c], eax
// 006f8cb6  894148               mov dword ptr [ecx + 0x48], eax
// 006f8cb9  894154               mov dword ptr [ecx + 0x54], eax
// 006f8cbc  894178               mov dword ptr [ecx + 0x78], eax
// 006f8cbf  894160               mov dword ptr [ecx + 0x60], eax
// 006f8cc2  898184000000         mov dword ptr [ecx + 0x84], eax
// 006f8cc8  89416c               mov dword ptr [ecx + 0x6c], eax
// 006f8ccb  898190000000         mov dword ptr [ecx + 0x90], eax
// 006f8cd1  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?SetDefaultValues@CXTPPropertyGridItemMetrics@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
