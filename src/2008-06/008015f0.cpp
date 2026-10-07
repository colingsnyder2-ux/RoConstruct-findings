// roc 2008-06 008015f0  unit: seg_00800000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008015f0
//
// 008015f0  a180dc9700           mov eax, dword ptr [0x97dc80]
// 008015f5  85c0                 test eax, eax
// 008015f7  7409                 je 0x801602
// 008015f9  50                   push eax
// 008015fa  e87bf0e9ff           call 0x6a067a
// 008015ff  83c404               add esp, 4
// 00801602  a174dc9700           mov eax, dword ptr [0x97dc74]
// 00801607  50                   push eax
// 00801608  c70580dc970000000000 mov dword ptr [0x97dc80], 0
// 00801612  c70584dc970000000000 mov dword ptr [0x97dc84], 0
// 0080161c  c70588dc970000000000 mov dword ptr [0x97dc88], 0
// 00801626  e84ff0e9ff           call 0x6a067a
// 0080162b  59                   pop ecx
// 0080162c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
