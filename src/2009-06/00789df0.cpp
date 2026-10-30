// roc 2009-06 00789df0  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789df0
//
// 00789df0  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 00789df7  750c                 jne 0x789e05
// 00789df9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00789dff  50                   push eax
// 00789e00  e8ebf7ffff           call 0x7895f0
// 00789e05  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
