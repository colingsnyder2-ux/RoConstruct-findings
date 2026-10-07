// roc 2008-06 007fc3d0  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc3d0
//
// 007fc3d0  a150289700           mov eax, dword ptr [0x972850]
// 007fc3d5  85c0                 test eax, eax
// 007fc3d7  7409                 je 0x7fc3e2
// 007fc3d9  50                   push eax
// 007fc3da  e89b42eaff           call 0x6a067a
// 007fc3df  83c404               add esp, 4
// 007fc3e2  a144289700           mov eax, dword ptr [0x972844]
// 007fc3e7  50                   push eax
// 007fc3e8  c7055028970000000000 mov dword ptr [0x972850], 0
// 007fc3f2  c7055428970000000000 mov dword ptr [0x972854], 0
// 007fc3fc  c7055828970000000000 mov dword ptr [0x972858], 0
// 007fc406  e86f42eaff           call 0x6a067a
// 007fc40b  59                   pop ecx
// 007fc40c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
