// roc 2007-03 005c8920  unit: seg_005c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c8920
//
// 005c8920  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c8924  6a00                 push 0
// 005c8926  e845e1feff           call 0x5b6a70
// 005c892b  c20400               ret 4
// library rbxgs/reflection\reflection_function.cpp (function ?destroy@?$allocator@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@QAEXPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
