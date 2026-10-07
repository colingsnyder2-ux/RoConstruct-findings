// roc 2009-06 008966e0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008966e0
//
// 008966e0  a19c1ba400           mov eax, dword ptr [0xa41b9c]
// 008966e5  85c0                 test eax, eax
// 008966e7  7409                 je 0x8966f2
// 008966e9  50                   push eax
// 008966ea  e84323e8ff           call 0x718a32
// 008966ef  83c404               add esp, 4
// 008966f2  a1901ba400           mov eax, dword ptr [0xa41b90]
// 008966f7  50                   push eax
// 008966f8  c7059c1ba40000000000 mov dword ptr [0xa41b9c], 0
// 00896702  c705a01ba40000000000 mov dword ptr [0xa41ba0], 0
// 0089670c  c705a41ba40000000000 mov dword ptr [0xa41ba4], 0
// 00896716  e81723e8ff           call 0x718a32
// 0089671b  59                   pop ecx
// 0089671c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
