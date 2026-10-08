// roc 2012-06 00b16890  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b16890
//
// 00b16890  a1a8e7e200           mov eax, dword ptr [0xe2e7a8]
// 00b16895  85c0                 test eax, eax
// 00b16897  7409                 je 0xb168a2
// 00b16899  50                   push eax
// 00b1689a  e875b8e6ff           call 0x982114
// 00b1689f  83c404               add esp, 4
// 00b168a2  c705a8e7e20000000000 mov dword ptr [0xe2e7a8], 0
// 00b168ac  c705ace7e20000000000 mov dword ptr [0xe2e7ac], 0
// 00b168b6  c705b0e7e20000000000 mov dword ptr [0xe2e7b0], 0
// 00b168c0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
