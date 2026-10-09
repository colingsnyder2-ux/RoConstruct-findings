// roc 2009-12 009847a0  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009847a0
//
// 009847a0  a12402b900           mov eax, dword ptr [0xb90224]
// 009847a5  85c0                 test eax, eax
// 009847a7  7409                 je 0x9847b2
// 009847a9  50                   push eax
// 009847aa  e8abf0e6ff           call 0x7f385a
// 009847af  83c404               add esp, 4
// 009847b2  a11802b900           mov eax, dword ptr [0xb90218]
// 009847b7  50                   push eax
// 009847b8  c7052402b90000000000 mov dword ptr [0xb90224], 0
// 009847c2  c7052802b90000000000 mov dword ptr [0xb90228], 0
// 009847cc  c7052c02b90000000000 mov dword ptr [0xb9022c], 0
// 009847d6  e87ff0e6ff           call 0x7f385a
// 009847db  59                   pop ecx
// 009847dc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
