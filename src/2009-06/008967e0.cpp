// roc 2009-06 008967e0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008967e0
//
// 008967e0  a12c1ba400           mov eax, dword ptr [0xa41b2c]
// 008967e5  85c0                 test eax, eax
// 008967e7  7409                 je 0x8967f2
// 008967e9  50                   push eax
// 008967ea  e84322e8ff           call 0x718a32
// 008967ef  83c404               add esp, 4
// 008967f2  a1201ba400           mov eax, dword ptr [0xa41b20]
// 008967f7  50                   push eax
// 008967f8  c7052c1ba40000000000 mov dword ptr [0xa41b2c], 0
// 00896802  c705301ba40000000000 mov dword ptr [0xa41b30], 0
// 0089680c  c705341ba40000000000 mov dword ptr [0xa41b34], 0
// 00896816  e81722e8ff           call 0x718a32
// 0089681b  59                   pop ecx
// 0089681c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
