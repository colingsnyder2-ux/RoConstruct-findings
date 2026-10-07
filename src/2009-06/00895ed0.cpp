// roc 2009-06 00895ed0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895ed0
//
// 00895ed0  a110f1a300           mov eax, dword ptr [0xa3f110]
// 00895ed5  85c0                 test eax, eax
// 00895ed7  7409                 je 0x895ee2
// 00895ed9  50                   push eax
// 00895eda  e8532be8ff           call 0x718a32
// 00895edf  83c404               add esp, 4
// 00895ee2  a104f1a300           mov eax, dword ptr [0xa3f104]
// 00895ee7  50                   push eax
// 00895ee8  c70510f1a30000000000 mov dword ptr [0xa3f110], 0
// 00895ef2  c70514f1a30000000000 mov dword ptr [0xa3f114], 0
// 00895efc  c70518f1a30000000000 mov dword ptr [0xa3f118], 0
// 00895f06  e8272be8ff           call 0x718a32
// 00895f0b  59                   pop ecx
// 00895f0c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
