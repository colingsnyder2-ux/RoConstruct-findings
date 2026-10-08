// roc 2012-06 00b167d0  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b167d0
//
// 00b167d0  a190e7e200           mov eax, dword ptr [0xe2e790]
// 00b167d5  85c0                 test eax, eax
// 00b167d7  7409                 je 0xb167e2
// 00b167d9  50                   push eax
// 00b167da  e835b9e6ff           call 0x982114
// 00b167df  83c404               add esp, 4
// 00b167e2  c70590e7e20000000000 mov dword ptr [0xe2e790], 0
// 00b167ec  c70594e7e20000000000 mov dword ptr [0xe2e794], 0
// 00b167f6  c70598e7e20000000000 mov dword ptr [0xe2e798], 0
// 00b16800  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
