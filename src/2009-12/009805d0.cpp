// roc 2009-12 009805d0  unit: seg_00980000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009805d0
//
// 009805d0  a12805b800           mov eax, dword ptr [0xb80528]
// 009805d5  85c0                 test eax, eax
// 009805d7  7409                 je 0x9805e2
// 009805d9  50                   push eax
// 009805da  e87b32e7ff           call 0x7f385a
// 009805df  83c404               add esp, 4
// 009805e2  a11c05b800           mov eax, dword ptr [0xb8051c]
// 009805e7  50                   push eax
// 009805e8  c7052805b80000000000 mov dword ptr [0xb80528], 0
// 009805f2  c7052c05b80000000000 mov dword ptr [0xb8052c], 0
// 009805fc  c7053005b80000000000 mov dword ptr [0xb80530], 0
// 00980606  e84f32e7ff           call 0x7f385a
// 0098060b  59                   pop ecx
// 0098060c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
