// roc 2008-06 007fc490  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc490
//
// 007fc490  a1cc279700           mov eax, dword ptr [0x9727cc]
// 007fc495  85c0                 test eax, eax
// 007fc497  7409                 je 0x7fc4a2
// 007fc499  50                   push eax
// 007fc49a  e8db41eaff           call 0x6a067a
// 007fc49f  83c404               add esp, 4
// 007fc4a2  a1c0279700           mov eax, dword ptr [0x9727c0]
// 007fc4a7  50                   push eax
// 007fc4a8  c705cc27970000000000 mov dword ptr [0x9727cc], 0
// 007fc4b2  c705d027970000000000 mov dword ptr [0x9727d0], 0
// 007fc4bc  c705d427970000000000 mov dword ptr [0x9727d4], 0
// 007fc4c6  e8af41eaff           call 0x6a067a
// 007fc4cb  59                   pop ecx
// 007fc4cc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
