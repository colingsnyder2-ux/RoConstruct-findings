// roc 2010-06 00818dc0  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818dc0
//
// 00818dc0  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 00818dc7  750c                 jne 0x818dd5
// 00818dc9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00818dcf  50                   push eax
// 00818dd0  e8fbf7ffff           call 0x8185d0
// 00818dd5  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
