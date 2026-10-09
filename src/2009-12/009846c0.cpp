// roc 2009-12 009846c0  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009846c0
//
// 009846c0  a18c01b900           mov eax, dword ptr [0xb9018c]
// 009846c5  85c0                 test eax, eax
// 009846c7  7409                 je 0x9846d2
// 009846c9  50                   push eax
// 009846ca  e88bf1e6ff           call 0x7f385a
// 009846cf  83c404               add esp, 4
// 009846d2  a18001b900           mov eax, dword ptr [0xb90180]
// 009846d7  50                   push eax
// 009846d8  c7058c01b90000000000 mov dword ptr [0xb9018c], 0
// 009846e2  c7059001b90000000000 mov dword ptr [0xb90190], 0
// 009846ec  c7059401b90000000000 mov dword ptr [0xb90194], 0
// 009846f6  e85ff1e6ff           call 0x7f385a
// 009846fb  59                   pop ecx
// 009846fc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
