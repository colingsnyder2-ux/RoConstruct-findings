// roc 2012-06 00b14550  unit: seg_00b10000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b14550
//
// 00b14550  a1c845e200           mov eax, dword ptr [0xe245c8]
// 00b14555  85c0                 test eax, eax
// 00b14557  7409                 je 0xb14562
// 00b14559  50                   push eax
// 00b1455a  e8b5dbe6ff           call 0x982114
// 00b1455f  83c404               add esp, 4
// 00b14562  c705c845e20000000000 mov dword ptr [0xe245c8], 0
// 00b1456c  c705cc45e20000000000 mov dword ptr [0xe245cc], 0
// 00b14576  c705d045e20000000000 mov dword ptr [0xe245d0], 0
// 00b14580  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
