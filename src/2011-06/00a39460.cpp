// roc 2011-06 00a39460  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39460
//
// 00a39460  a124abcc00           mov eax, dword ptr [0xccab24]
// 00a39465  85c0                 test eax, eax
// 00a39467  7409                 je 0xa39472
// 00a39469  50                   push eax
// 00a3946a  e8e90bddff           call 0x80a058
// 00a3946f  83c404               add esp, 4
// 00a39472  c70524abcc0000000000 mov dword ptr [0xccab24], 0
// 00a3947c  c70528abcc0000000000 mov dword ptr [0xccab28], 0
// 00a39486  c7052cabcc0000000000 mov dword ptr [0xccab2c], 0
// 00a39490  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
