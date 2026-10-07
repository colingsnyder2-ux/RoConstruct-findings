// roc 2008-06 007fc510  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc510
//
// 007fc510  a174279700           mov eax, dword ptr [0x972774]
// 007fc515  85c0                 test eax, eax
// 007fc517  7409                 je 0x7fc522
// 007fc519  50                   push eax
// 007fc51a  e85b41eaff           call 0x6a067a
// 007fc51f  83c404               add esp, 4
// 007fc522  a168279700           mov eax, dword ptr [0x972768]
// 007fc527  50                   push eax
// 007fc528  c7057427970000000000 mov dword ptr [0x972774], 0
// 007fc532  c7057827970000000000 mov dword ptr [0x972778], 0
// 007fc53c  c7057c27970000000000 mov dword ptr [0x97277c], 0
// 007fc546  e82f41eaff           call 0x6a067a
// 007fc54b  59                   pop ecx
// 007fc54c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
