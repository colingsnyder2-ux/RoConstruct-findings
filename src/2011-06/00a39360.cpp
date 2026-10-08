// roc 2011-06 00a39360  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39360
//
// 00a39360  a198aacc00           mov eax, dword ptr [0xccaa98]
// 00a39365  85c0                 test eax, eax
// 00a39367  7409                 je 0xa39372
// 00a39369  50                   push eax
// 00a3936a  e8e90cddff           call 0x80a058
// 00a3936f  83c404               add esp, 4
// 00a39372  c70598aacc0000000000 mov dword ptr [0xccaa98], 0
// 00a3937c  c7059caacc0000000000 mov dword ptr [0xccaa9c], 0
// 00a39386  c705a0aacc0000000000 mov dword ptr [0xccaaa0], 0
// 00a39390  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
