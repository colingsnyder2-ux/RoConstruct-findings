// roc 2012-06 00b172a0  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b172a0
//
// 00b172a0  a15c12e300           mov eax, dword ptr [0xe3125c]
// 00b172a5  85c0                 test eax, eax
// 00b172a7  7409                 je 0xb172b2
// 00b172a9  50                   push eax
// 00b172aa  e865aee6ff           call 0x982114
// 00b172af  83c404               add esp, 4
// 00b172b2  c7055c12e30000000000 mov dword ptr [0xe3125c], 0
// 00b172bc  c7056012e30000000000 mov dword ptr [0xe31260], 0
// 00b172c6  c7056412e30000000000 mov dword ptr [0xe31264], 0
// 00b172d0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
