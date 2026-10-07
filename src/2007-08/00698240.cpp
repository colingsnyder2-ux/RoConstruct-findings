// roc 2007-08 00698240  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698240
//
// 00698240  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 00698247  750c                 jne 0x698255
// 00698249  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0069824f  50                   push eax
// 00698250  e8bbf7ffff           call 0x697a10
// 00698255  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridItem.cpp
