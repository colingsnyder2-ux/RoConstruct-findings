// roc 2008-06 008015b0  unit: seg_00800000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008015b0
//
// 008015b0  a164dc9700           mov eax, dword ptr [0x97dc64]
// 008015b5  85c0                 test eax, eax
// 008015b7  7409                 je 0x8015c2
// 008015b9  50                   push eax
// 008015ba  e8bbf0e9ff           call 0x6a067a
// 008015bf  83c404               add esp, 4
// 008015c2  a158dc9700           mov eax, dword ptr [0x97dc58]
// 008015c7  50                   push eax
// 008015c8  c70564dc970000000000 mov dword ptr [0x97dc64], 0
// 008015d2  c70568dc970000000000 mov dword ptr [0x97dc68], 0
// 008015dc  c7056cdc970000000000 mov dword ptr [0x97dc6c], 0
// 008015e6  e88ff0e9ff           call 0x6a067a
// 008015eb  59                   pop ecx
// 008015ec  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
