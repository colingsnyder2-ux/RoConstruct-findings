// roc 2009-06 008993d0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008993d0
//
// 008993d0  a1c4a7a400           mov eax, dword ptr [0xa4a7c4]
// 008993d5  85c0                 test eax, eax
// 008993d7  7409                 je 0x8993e2
// 008993d9  50                   push eax
// 008993da  e853f6e7ff           call 0x718a32
// 008993df  83c404               add esp, 4
// 008993e2  a1b8a7a400           mov eax, dword ptr [0xa4a7b8]
// 008993e7  50                   push eax
// 008993e8  c705c4a7a40000000000 mov dword ptr [0xa4a7c4], 0
// 008993f2  c705c8a7a40000000000 mov dword ptr [0xa4a7c8], 0
// 008993fc  c705cca7a40000000000 mov dword ptr [0xa4a7cc], 0
// 00899406  e827f6e7ff           call 0x718a32
// 0089940b  59                   pop ecx
// 0089940c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
