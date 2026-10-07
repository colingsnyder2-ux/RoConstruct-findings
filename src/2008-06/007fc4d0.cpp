// roc 2008-06 007fc4d0  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc4d0
//
// 007fc4d0  a1a0279700           mov eax, dword ptr [0x9727a0]
// 007fc4d5  85c0                 test eax, eax
// 007fc4d7  7409                 je 0x7fc4e2
// 007fc4d9  50                   push eax
// 007fc4da  e89b41eaff           call 0x6a067a
// 007fc4df  83c404               add esp, 4
// 007fc4e2  a194279700           mov eax, dword ptr [0x972794]
// 007fc4e7  50                   push eax
// 007fc4e8  c705a027970000000000 mov dword ptr [0x9727a0], 0
// 007fc4f2  c705a427970000000000 mov dword ptr [0x9727a4], 0
// 007fc4fc  c705a827970000000000 mov dword ptr [0x9727a8], 0
// 007fc506  e86f41eaff           call 0x6a067a
// 007fc50b  59                   pop ecx
// 007fc50c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
