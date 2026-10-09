// roc 2009-12 00984720  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984720
//
// 00984720  a10402b900           mov eax, dword ptr [0xb90204]
// 00984725  85c0                 test eax, eax
// 00984727  7409                 je 0x984732
// 00984729  50                   push eax
// 0098472a  e82bf1e6ff           call 0x7f385a
// 0098472f  83c404               add esp, 4
// 00984732  a1f801b900           mov eax, dword ptr [0xb901f8]
// 00984737  50                   push eax
// 00984738  c7050402b90000000000 mov dword ptr [0xb90204], 0
// 00984742  c7050802b90000000000 mov dword ptr [0xb90208], 0
// 0098474c  c7050c02b90000000000 mov dword ptr [0xb9020c], 0
// 00984756  e8fff0e6ff           call 0x7f385a
// 0098475b  59                   pop ecx
// 0098475c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
