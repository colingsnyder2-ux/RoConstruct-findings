// roc 2012-06 009f1b50  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1b50
//
// 009f1b50  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 009f1b57  750c                 jne 0x9f1b65
// 009f1b59  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 009f1b5f  50                   push eax
// 009f1b60  e8ebf7ffff           call 0x9f1350
// 009f1b65  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
