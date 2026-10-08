// roc 2007-03 0077a310  unit: seg_00770000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a310
//
// 0077a310  a190d48b00           mov eax, dword ptr [0x8bd490]
// 0077a315  85c0                 test eax, eax
// 0077a317  7409                 je 0x77a322
// 0077a319  50                   push eax
// 0077a31a  e8d13deaff           call 0x61e0f0
// 0077a31f  83c404               add esp, 4
// 0077a322  c70590d48b0000000000 mov dword ptr [0x8bd490], 0
// 0077a32c  c70594d48b0000000000 mov dword ptr [0x8bd494], 0
// 0077a336  c70598d48b0000000000 mov dword ptr [0x8bd498], 0
// 0077a340  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
