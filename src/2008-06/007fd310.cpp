// roc 2008-06 007fd310  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd310
//
// 007fd310  a1a44c9700           mov eax, dword ptr [0x974ca4]
// 007fd315  85c0                 test eax, eax
// 007fd317  7409                 je 0x7fd322
// 007fd319  50                   push eax
// 007fd31a  e85b33eaff           call 0x6a067a
// 007fd31f  83c404               add esp, 4
// 007fd322  a1984c9700           mov eax, dword ptr [0x974c98]
// 007fd327  50                   push eax
// 007fd328  c705a44c970000000000 mov dword ptr [0x974ca4], 0
// 007fd332  c705a84c970000000000 mov dword ptr [0x974ca8], 0
// 007fd33c  c705ac4c970000000000 mov dword ptr [0x974cac], 0
// 007fd346  e82f33eaff           call 0x6a067a
// 007fd34b  59                   pop ecx
// 007fd34c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
