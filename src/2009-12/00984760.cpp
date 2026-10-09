// roc 2009-12 00984760  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984760
//
// 00984760  a14002b900           mov eax, dword ptr [0xb90240]
// 00984765  85c0                 test eax, eax
// 00984767  7409                 je 0x984772
// 00984769  50                   push eax
// 0098476a  e8ebf0e6ff           call 0x7f385a
// 0098476f  83c404               add esp, 4
// 00984772  a13402b900           mov eax, dword ptr [0xb90234]
// 00984777  50                   push eax
// 00984778  c7054002b90000000000 mov dword ptr [0xb90240], 0
// 00984782  c7054402b90000000000 mov dword ptr [0xb90244], 0
// 0098478c  c7054802b90000000000 mov dword ptr [0xb90248], 0
// 00984796  e8bff0e6ff           call 0x7f385a
// 0098479b  59                   pop ecx
// 0098479c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
