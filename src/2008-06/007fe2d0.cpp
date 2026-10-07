// roc 2008-06 007fe2d0  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe2d0
//
// 007fe2d0  a1b06f9700           mov eax, dword ptr [0x976fb0]
// 007fe2d5  85c0                 test eax, eax
// 007fe2d7  7409                 je 0x7fe2e2
// 007fe2d9  50                   push eax
// 007fe2da  e89b23eaff           call 0x6a067a
// 007fe2df  83c404               add esp, 4
// 007fe2e2  a1a46f9700           mov eax, dword ptr [0x976fa4]
// 007fe2e7  50                   push eax
// 007fe2e8  c705b06f970000000000 mov dword ptr [0x976fb0], 0
// 007fe2f2  c705b46f970000000000 mov dword ptr [0x976fb4], 0
// 007fe2fc  c705b86f970000000000 mov dword ptr [0x976fb8], 0
// 007fe306  e86f23eaff           call 0x6a067a
// 007fe30b  59                   pop ecx
// 007fe30c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
