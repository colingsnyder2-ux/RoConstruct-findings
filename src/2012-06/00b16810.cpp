// roc 2012-06 00b16810  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b16810
//
// 00b16810  a1d0e7e200           mov eax, dword ptr [0xe2e7d0]
// 00b16815  85c0                 test eax, eax
// 00b16817  7409                 je 0xb16822
// 00b16819  50                   push eax
// 00b1681a  e8f5b8e6ff           call 0x982114
// 00b1681f  83c404               add esp, 4
// 00b16822  c705d0e7e20000000000 mov dword ptr [0xe2e7d0], 0
// 00b1682c  c705d4e7e20000000000 mov dword ptr [0xe2e7d4], 0
// 00b16836  c705d8e7e20000000000 mov dword ptr [0xe2e7d8], 0
// 00b16840  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
