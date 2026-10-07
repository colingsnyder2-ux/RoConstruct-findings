// roc 2010-06 009e1fb0  unit: seg_009e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1fb0
//
// 009e1fb0  a1e887c100           mov eax, dword ptr [0xc187e8]
// 009e1fb5  85c0                 test eax, eax
// 009e1fb7  7409                 je 0x9e1fc2
// 009e1fb9  50                   push eax
// 009e1fba  e8db59dcff           call 0x7a799a
// 009e1fbf  83c404               add esp, 4
// 009e1fc2  a1dc87c100           mov eax, dword ptr [0xc187dc]
// 009e1fc7  50                   push eax
// 009e1fc8  c705e887c10000000000 mov dword ptr [0xc187e8], 0
// 009e1fd2  c705ec87c10000000000 mov dword ptr [0xc187ec], 0
// 009e1fdc  c705f087c10000000000 mov dword ptr [0xc187f0], 0
// 009e1fe6  e8af59dcff           call 0x7a799a
// 009e1feb  59                   pop ecx
// 009e1fec  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
