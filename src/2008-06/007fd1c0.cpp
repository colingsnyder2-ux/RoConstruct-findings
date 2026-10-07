// roc 2008-06 007fd1c0  unit: seg_007f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd1c0
//
// 007fd1c0  a1244b9700           mov eax, dword ptr [0x974b24]
// 007fd1c5  85c0                 test eax, eax
// 007fd1c7  7409                 je 0x7fd1d2
// 007fd1c9  50                   push eax
// 007fd1ca  e8ab34eaff           call 0x6a067a
// 007fd1cf  83c404               add esp, 4
// 007fd1d2  a1184b9700           mov eax, dword ptr [0x974b18]
// 007fd1d7  50                   push eax
// 007fd1d8  c705244b970000000000 mov dword ptr [0x974b24], 0
// 007fd1e2  c705284b970000000000 mov dword ptr [0x974b28], 0
// 007fd1ec  c7052c4b970000000000 mov dword ptr [0x974b2c], 0
// 007fd1f6  e87f34eaff           call 0x6a067a
// 007fd1fb  59                   pop ecx
// 007fd1fc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
