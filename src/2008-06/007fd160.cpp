// roc 2008-06 007fd160  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd160
//
// 007fd160  a1e04a9700           mov eax, dword ptr [0x974ae0]
// 007fd165  85c0                 test eax, eax
// 007fd167  7409                 je 0x7fd172
// 007fd169  50                   push eax
// 007fd16a  e80b35eaff           call 0x6a067a
// 007fd16f  83c404               add esp, 4
// 007fd172  a1d44a9700           mov eax, dword ptr [0x974ad4]
// 007fd177  50                   push eax
// 007fd178  c705e04a970000000000 mov dword ptr [0x974ae0], 0
// 007fd182  c705e44a970000000000 mov dword ptr [0x974ae4], 0
// 007fd18c  c705e84a970000000000 mov dword ptr [0x974ae8], 0
// 007fd196  e8df34eaff           call 0x6a067a
// 007fd19b  59                   pop ecx
// 007fd19c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
