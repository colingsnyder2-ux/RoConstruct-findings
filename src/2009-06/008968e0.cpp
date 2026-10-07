// roc 2009-06 008968e0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008968e0
//
// 008968e0  a1bc1aa400           mov eax, dword ptr [0xa41abc]
// 008968e5  85c0                 test eax, eax
// 008968e7  7409                 je 0x8968f2
// 008968e9  50                   push eax
// 008968ea  e84321e8ff           call 0x718a32
// 008968ef  83c404               add esp, 4
// 008968f2  a1b01aa400           mov eax, dword ptr [0xa41ab0]
// 008968f7  50                   push eax
// 008968f8  c705bc1aa40000000000 mov dword ptr [0xa41abc], 0
// 00896902  c705c01aa40000000000 mov dword ptr [0xa41ac0], 0
// 0089690c  c705c41aa40000000000 mov dword ptr [0xa41ac4], 0
// 00896916  e81721e8ff           call 0x718a32
// 0089691b  59                   pop ecx
// 0089691c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
