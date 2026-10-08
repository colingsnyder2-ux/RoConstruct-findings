// roc 2012-06 00b16850  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b16850
//
// 00b16850  a1bce7e200           mov eax, dword ptr [0xe2e7bc]
// 00b16855  85c0                 test eax, eax
// 00b16857  7409                 je 0xb16862
// 00b16859  50                   push eax
// 00b1685a  e8b5b8e6ff           call 0x982114
// 00b1685f  83c404               add esp, 4
// 00b16862  c705bce7e20000000000 mov dword ptr [0xe2e7bc], 0
// 00b1686c  c705c0e7e20000000000 mov dword ptr [0xe2e7c0], 0
// 00b16876  c705c4e7e20000000000 mov dword ptr [0xe2e7c4], 0
// 00b16880  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
