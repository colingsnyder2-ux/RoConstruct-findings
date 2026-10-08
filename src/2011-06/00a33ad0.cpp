// roc 2011-06 00a33ad0  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33ad0
//
// 00a33ad0  a11882cb00           mov eax, dword ptr [0xcb8218]
// 00a33ad5  85c0                 test eax, eax
// 00a33ad7  7409                 je 0xa33ae2
// 00a33ad9  50                   push eax
// 00a33ada  e87965ddff           call 0x80a058
// 00a33adf  83c404               add esp, 4
// 00a33ae2  c7051882cb0000000000 mov dword ptr [0xcb8218], 0
// 00a33aec  c7051c82cb0000000000 mov dword ptr [0xcb821c], 0
// 00a33af6  c7052082cb0000000000 mov dword ptr [0xcb8220], 0
// 00a33b00  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
