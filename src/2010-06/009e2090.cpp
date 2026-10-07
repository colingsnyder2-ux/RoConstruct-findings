// roc 2010-06 009e2090  unit: seg_009e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2090
//
// 009e2090  a18088c100           mov eax, dword ptr [0xc18880]
// 009e2095  85c0                 test eax, eax
// 009e2097  7409                 je 0x9e20a2
// 009e2099  50                   push eax
// 009e209a  e8fb58dcff           call 0x7a799a
// 009e209f  83c404               add esp, 4
// 009e20a2  a17488c100           mov eax, dword ptr [0xc18874]
// 009e20a7  50                   push eax
// 009e20a8  c7058088c10000000000 mov dword ptr [0xc18880], 0
// 009e20b2  c7058488c10000000000 mov dword ptr [0xc18884], 0
// 009e20bc  c7058888c10000000000 mov dword ptr [0xc18888], 0
// 009e20c6  e8cf58dcff           call 0x7a799a
// 009e20cb  59                   pop ecx
// 009e20cc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
