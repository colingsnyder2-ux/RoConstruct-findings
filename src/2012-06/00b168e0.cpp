// roc 2012-06 00b168e0  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b168e0
//
// 00b168e0  a120e8e200           mov eax, dword ptr [0xe2e820]
// 00b168e5  85c0                 test eax, eax
// 00b168e7  7409                 je 0xb168f2
// 00b168e9  50                   push eax
// 00b168ea  e825b8e6ff           call 0x982114
// 00b168ef  83c404               add esp, 4
// 00b168f2  c70520e8e20000000000 mov dword ptr [0xe2e820], 0
// 00b168fc  c70524e8e20000000000 mov dword ptr [0xe2e824], 0
// 00b16906  c70528e8e20000000000 mov dword ptr [0xe2e828], 0
// 00b16910  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
