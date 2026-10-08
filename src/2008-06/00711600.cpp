// from server: 100% by auto
// roc 2008-06 00711600  unit: CXTPPropertyGridItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711600
//
// 00711600  83b99800000000       cmp dword ptr [ecx + 0x98], 0
// 00711607  750c                 jne 0x711615
// 00711609  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0071160f  50                   push eax
// 00711610  e8bbf7ffff           call 0x710dd0
// 00711615  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnAddChildItem@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
