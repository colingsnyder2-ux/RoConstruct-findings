// roc 2008-06 007fc410  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc410
//
// 007fc410  a124289700           mov eax, dword ptr [0x972824]
// 007fc415  85c0                 test eax, eax
// 007fc417  7409                 je 0x7fc422
// 007fc419  50                   push eax
// 007fc41a  e85b42eaff           call 0x6a067a
// 007fc41f  83c404               add esp, 4
// 007fc422  a118289700           mov eax, dword ptr [0x972818]
// 007fc427  50                   push eax
// 007fc428  c7052428970000000000 mov dword ptr [0x972824], 0
// 007fc432  c7052828970000000000 mov dword ptr [0x972828], 0
// 007fc43c  c7052c28970000000000 mov dword ptr [0x97282c], 0
// 007fc446  e82f42eaff           call 0x6a067a
// 007fc44b  59                   pop ecx
// 007fc44c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
