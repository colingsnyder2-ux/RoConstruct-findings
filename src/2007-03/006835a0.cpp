// roc 2007-03 006835a0  unit: seg_00680000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006835a0
//
// 006835a0  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 006835a7  750c                 jne 0x6835b5
// 006835a9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 006835af  50                   push eax
// 006835b0  e84bf8ffff           call 0x682e00
// 006835b5  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
