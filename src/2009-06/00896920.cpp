// roc 2009-06 00896920  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896920
//
// 00896920  a1a01aa400           mov eax, dword ptr [0xa41aa0]
// 00896925  85c0                 test eax, eax
// 00896927  7409                 je 0x896932
// 00896929  50                   push eax
// 0089692a  e80321e8ff           call 0x718a32
// 0089692f  83c404               add esp, 4
// 00896932  a1941aa400           mov eax, dword ptr [0xa41a94]
// 00896937  50                   push eax
// 00896938  c705a01aa40000000000 mov dword ptr [0xa41aa0], 0
// 00896942  c705a41aa40000000000 mov dword ptr [0xa41aa4], 0
// 0089694c  c705a81aa40000000000 mov dword ptr [0xa41aa8], 0
// 00896956  e8d720e8ff           call 0x718a32
// 0089695b  59                   pop ecx
// 0089695c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
