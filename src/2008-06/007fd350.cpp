// roc 2008-06 007fd350  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd350
//
// 007fd350  a1c44c9700           mov eax, dword ptr [0x974cc4]
// 007fd355  85c0                 test eax, eax
// 007fd357  7409                 je 0x7fd362
// 007fd359  50                   push eax
// 007fd35a  e81b33eaff           call 0x6a067a
// 007fd35f  83c404               add esp, 4
// 007fd362  a1b84c9700           mov eax, dword ptr [0x974cb8]
// 007fd367  50                   push eax
// 007fd368  c705c44c970000000000 mov dword ptr [0x974cc4], 0
// 007fd372  c705c84c970000000000 mov dword ptr [0x974cc8], 0
// 007fd37c  c705cc4c970000000000 mov dword ptr [0x974ccc], 0
// 007fd386  e8ef32eaff           call 0x6a067a
// 007fd38b  59                   pop ecx
// 007fd38c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
