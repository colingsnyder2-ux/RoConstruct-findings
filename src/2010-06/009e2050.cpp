// roc 2010-06 009e2050  unit: seg_009e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2050
//
// 009e2050  a19c88c100           mov eax, dword ptr [0xc1889c]
// 009e2055  85c0                 test eax, eax
// 009e2057  7409                 je 0x9e2062
// 009e2059  50                   push eax
// 009e205a  e83b59dcff           call 0x7a799a
// 009e205f  83c404               add esp, 4
// 009e2062  a19088c100           mov eax, dword ptr [0xc18890]
// 009e2067  50                   push eax
// 009e2068  c7059c88c10000000000 mov dword ptr [0xc1889c], 0
// 009e2072  c705a088c10000000000 mov dword ptr [0xc188a0], 0
// 009e207c  c705a488c10000000000 mov dword ptr [0xc188a4], 0
// 009e2086  e80f59dcff           call 0x7a799a
// 009e208b  59                   pop ecx
// 009e208c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
