// roc 2008-06 007fc450  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc450
//
// 007fc450  a1f8279700           mov eax, dword ptr [0x9727f8]
// 007fc455  85c0                 test eax, eax
// 007fc457  7409                 je 0x7fc462
// 007fc459  50                   push eax
// 007fc45a  e81b42eaff           call 0x6a067a
// 007fc45f  83c404               add esp, 4
// 007fc462  a1ec279700           mov eax, dword ptr [0x9727ec]
// 007fc467  50                   push eax
// 007fc468  c705f827970000000000 mov dword ptr [0x9727f8], 0
// 007fc472  c705fc27970000000000 mov dword ptr [0x9727fc], 0
// 007fc47c  c7050028970000000000 mov dword ptr [0x972800], 0
// 007fc486  e8ef41eaff           call 0x6a067a
// 007fc48b  59                   pop ecx
// 007fc48c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
