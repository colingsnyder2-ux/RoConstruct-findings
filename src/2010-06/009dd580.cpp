// roc 2010-06 009dd580  unit: seg_009d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd580
//
// 009dd580  a1dc65c000           mov eax, dword ptr [0xc065dc]
// 009dd585  85c0                 test eax, eax
// 009dd587  7409                 je 0x9dd592
// 009dd589  50                   push eax
// 009dd58a  e80ba4dcff           call 0x7a799a
// 009dd58f  83c404               add esp, 4
// 009dd592  a1d065c000           mov eax, dword ptr [0xc065d0]
// 009dd597  50                   push eax
// 009dd598  c705dc65c00000000000 mov dword ptr [0xc065dc], 0
// 009dd5a2  c705e065c00000000000 mov dword ptr [0xc065e0], 0
// 009dd5ac  c705e465c00000000000 mov dword ptr [0xc065e4], 0
// 009dd5b6  e8dfa3dcff           call 0x7a799a
// 009dd5bb  59                   pop ecx
// 009dd5bc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
