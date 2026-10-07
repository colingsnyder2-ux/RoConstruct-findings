// roc 2008-06 00801630  unit: seg_00800000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801630
//
// 00801630  a19cdc9700           mov eax, dword ptr [0x97dc9c]
// 00801635  85c0                 test eax, eax
// 00801637  7409                 je 0x801642
// 00801639  50                   push eax
// 0080163a  e83bf0e9ff           call 0x6a067a
// 0080163f  83c404               add esp, 4
// 00801642  a190dc9700           mov eax, dword ptr [0x97dc90]
// 00801647  50                   push eax
// 00801648  c7059cdc970000000000 mov dword ptr [0x97dc9c], 0
// 00801652  c705a0dc970000000000 mov dword ptr [0x97dca0], 0
// 0080165c  c705a4dc970000000000 mov dword ptr [0x97dca4], 0
// 00801666  e80ff0e9ff           call 0x6a067a
// 0080166b  59                   pop ecx
// 0080166c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
