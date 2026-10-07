// roc 2008-06 007fbd10  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbd10
//
// 007fbd10  a1f40f9700           mov eax, dword ptr [0x970ff4]
// 007fbd15  85c0                 test eax, eax
// 007fbd17  7409                 je 0x7fbd22
// 007fbd19  50                   push eax
// 007fbd1a  e85b49eaff           call 0x6a067a
// 007fbd1f  83c404               add esp, 4
// 007fbd22  a1e80f9700           mov eax, dword ptr [0x970fe8]
// 007fbd27  50                   push eax
// 007fbd28  c705f40f970000000000 mov dword ptr [0x970ff4], 0
// 007fbd32  c705f80f970000000000 mov dword ptr [0x970ff8], 0
// 007fbd3c  c705fc0f970000000000 mov dword ptr [0x970ffc], 0
// 007fbd46  e82f49eaff           call 0x6a067a
// 007fbd4b  59                   pop ecx
// 007fbd4c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
