// roc 2010-06 009dd5c0  unit: seg_009d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd5c0
//
// 009dd5c0  a1c065c000           mov eax, dword ptr [0xc065c0]
// 009dd5c5  85c0                 test eax, eax
// 009dd5c7  7409                 je 0x9dd5d2
// 009dd5c9  50                   push eax
// 009dd5ca  e8cba3dcff           call 0x7a799a
// 009dd5cf  83c404               add esp, 4
// 009dd5d2  a1b465c000           mov eax, dword ptr [0xc065b4]
// 009dd5d7  50                   push eax
// 009dd5d8  c705c065c00000000000 mov dword ptr [0xc065c0], 0
// 009dd5e2  c705c465c00000000000 mov dword ptr [0xc065c4], 0
// 009dd5ec  c705c865c00000000000 mov dword ptr [0xc065c8], 0
// 009dd5f6  e89fa3dcff           call 0x7a799a
// 009dd5fb  59                   pop ecx
// 009dd5fc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
