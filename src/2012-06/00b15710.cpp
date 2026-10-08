// roc 2012-06 00b15710  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b15710
//
// 00b15710  a1cca1e200           mov eax, dword ptr [0xe2a1cc]
// 00b15715  85c0                 test eax, eax
// 00b15717  7409                 je 0xb15722
// 00b15719  50                   push eax
// 00b1571a  e8f5c9e6ff           call 0x982114
// 00b1571f  83c404               add esp, 4
// 00b15722  c705cca1e20000000000 mov dword ptr [0xe2a1cc], 0
// 00b1572c  c705d0a1e20000000000 mov dword ptr [0xe2a1d0], 0
// 00b15736  c705d4a1e20000000000 mov dword ptr [0xe2a1d4], 0
// 00b15740  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
