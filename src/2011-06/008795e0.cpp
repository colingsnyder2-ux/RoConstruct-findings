// roc 2011-06 008795e0  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008795e0
//
// 008795e0  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 008795e7  750c                 jne 0x8795f5
// 008795e9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 008795ef  50                   push eax
// 008795f0  e8ebf7ffff           call 0x878de0
// 008795f5  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
