// roc 2009-12 00980590  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980590
//
// 00980590  a14405b800           mov eax, dword ptr [0xb80544]
// 00980595  85c0                 test eax, eax
// 00980597  7409                 je 0x9805a2
// 00980599  50                   push eax
// 0098059a  e8bb32e7ff           call 0x7f385a
// 0098059f  83c404               add esp, 4
// 009805a2  a13805b800           mov eax, dword ptr [0xb80538]
// 009805a7  50                   push eax
// 009805a8  c7054405b80000000000 mov dword ptr [0xb80544], 0
// 009805b2  c7054805b80000000000 mov dword ptr [0xb80548], 0
// 009805bc  c7054c05b80000000000 mov dword ptr [0xb8054c], 0
// 009805c6  e88f32e7ff           call 0x7f385a
// 009805cb  59                   pop ecx
// 009805cc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
