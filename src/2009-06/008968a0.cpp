// roc 2009-06 008968a0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008968a0
//
// 008968a0  a1d81aa400           mov eax, dword ptr [0xa41ad8]
// 008968a5  85c0                 test eax, eax
// 008968a7  7409                 je 0x8968b2
// 008968a9  50                   push eax
// 008968aa  e88321e8ff           call 0x718a32
// 008968af  83c404               add esp, 4
// 008968b2  a1cc1aa400           mov eax, dword ptr [0xa41acc]
// 008968b7  50                   push eax
// 008968b8  c705d81aa40000000000 mov dword ptr [0xa41ad8], 0
// 008968c2  c705dc1aa40000000000 mov dword ptr [0xa41adc], 0
// 008968cc  c705e01aa40000000000 mov dword ptr [0xa41ae0], 0
// 008968d6  e85721e8ff           call 0x718a32
// 008968db  59                   pop ecx
// 008968dc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
