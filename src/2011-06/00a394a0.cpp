// roc 2011-06 00a394a0  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a394a0
//
// 00a394a0  a110abcc00           mov eax, dword ptr [0xccab10]
// 00a394a5  85c0                 test eax, eax
// 00a394a7  7409                 je 0xa394b2
// 00a394a9  50                   push eax
// 00a394aa  e8a90bddff           call 0x80a058
// 00a394af  83c404               add esp, 4
// 00a394b2  c70510abcc0000000000 mov dword ptr [0xccab10], 0
// 00a394bc  c70514abcc0000000000 mov dword ptr [0xccab14], 0
// 00a394c6  c70518abcc0000000000 mov dword ptr [0xccab18], 0
// 00a394d0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
