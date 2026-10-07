// roc 2009-06 008994a0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008994a0
//
// 008994a0  a138a8a400           mov eax, dword ptr [0xa4a838]
// 008994a5  85c0                 test eax, eax
// 008994a7  7409                 je 0x8994b2
// 008994a9  50                   push eax
// 008994aa  e883f5e7ff           call 0x718a32
// 008994af  83c404               add esp, 4
// 008994b2  a12ca8a400           mov eax, dword ptr [0xa4a82c]
// 008994b7  50                   push eax
// 008994b8  c70538a8a40000000000 mov dword ptr [0xa4a838], 0
// 008994c2  c7053ca8a40000000000 mov dword ptr [0xa4a83c], 0
// 008994cc  c70540a8a40000000000 mov dword ptr [0xa4a840], 0
// 008994d6  e857f5e7ff           call 0x718a32
// 008994db  59                   pop ecx
// 008994dc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
