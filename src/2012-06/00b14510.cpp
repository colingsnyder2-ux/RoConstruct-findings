// roc 2012-06 00b14510  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b14510
//
// 00b14510  a1dc45e200           mov eax, dword ptr [0xe245dc]
// 00b14515  85c0                 test eax, eax
// 00b14517  7409                 je 0xb14522
// 00b14519  50                   push eax
// 00b1451a  e8f5dbe6ff           call 0x982114
// 00b1451f  83c404               add esp, 4
// 00b14522  c705dc45e20000000000 mov dword ptr [0xe245dc], 0
// 00b1452c  c705e045e20000000000 mov dword ptr [0xe245e0], 0
// 00b14536  c705e445e20000000000 mov dword ptr [0xe245e4], 0
// 00b14540  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
