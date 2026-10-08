// roc 2011-06 00a33a90  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33a90
//
// 00a33a90  a12c82cb00           mov eax, dword ptr [0xcb822c]
// 00a33a95  85c0                 test eax, eax
// 00a33a97  7409                 je 0xa33aa2
// 00a33a99  50                   push eax
// 00a33a9a  e8b965ddff           call 0x80a058
// 00a33a9f  83c404               add esp, 4
// 00a33aa2  c7052c82cb0000000000 mov dword ptr [0xcb822c], 0
// 00a33aac  c7053082cb0000000000 mov dword ptr [0xcb8230], 0
// 00a33ab6  c7053482cb0000000000 mov dword ptr [0xcb8234], 0
// 00a33ac0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
