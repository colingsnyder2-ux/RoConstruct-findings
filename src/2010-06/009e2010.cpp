// roc 2010-06 009e2010  unit: seg_009e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2010
//
// 009e2010  a16088c100           mov eax, dword ptr [0xc18860]
// 009e2015  85c0                 test eax, eax
// 009e2017  7409                 je 0x9e2022
// 009e2019  50                   push eax
// 009e201a  e87b59dcff           call 0x7a799a
// 009e201f  83c404               add esp, 4
// 009e2022  a15488c100           mov eax, dword ptr [0xc18854]
// 009e2027  50                   push eax
// 009e2028  c7056088c10000000000 mov dword ptr [0xc18860], 0
// 009e2032  c7056488c10000000000 mov dword ptr [0xc18864], 0
// 009e203c  c7056888c10000000000 mov dword ptr [0xc18868], 0
// 009e2046  e84f59dcff           call 0x7a799a
// 009e204b  59                   pop ecx
// 009e204c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
