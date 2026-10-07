// roc 2009-06 008967a0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008967a0
//
// 008967a0  a1481ba400           mov eax, dword ptr [0xa41b48]
// 008967a5  85c0                 test eax, eax
// 008967a7  7409                 je 0x8967b2
// 008967a9  50                   push eax
// 008967aa  e88322e8ff           call 0x718a32
// 008967af  83c404               add esp, 4
// 008967b2  a13c1ba400           mov eax, dword ptr [0xa41b3c]
// 008967b7  50                   push eax
// 008967b8  c705481ba40000000000 mov dword ptr [0xa41b48], 0
// 008967c2  c7054c1ba40000000000 mov dword ptr [0xa41b4c], 0
// 008967cc  c705501ba40000000000 mov dword ptr [0xa41b50], 0
// 008967d6  e85722e8ff           call 0x718a32
// 008967db  59                   pop ecx
// 008967dc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
