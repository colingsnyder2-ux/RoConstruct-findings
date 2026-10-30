// roc 2009-12 00864e00  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864e00
//
// 00864e00  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 00864e07  750c                 jne 0x864e15
// 00864e09  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00864e0f  50                   push eax
// 00864e10  e8dbf7ffff           call 0x8645f0
// 00864e15  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
