// roc 2009-06 00896960  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896960
//
// 00896960  a1841aa400           mov eax, dword ptr [0xa41a84]
// 00896965  85c0                 test eax, eax
// 00896967  7409                 je 0x896972
// 00896969  50                   push eax
// 0089696a  e8c320e8ff           call 0x718a32
// 0089696f  83c404               add esp, 4
// 00896972  a1781aa400           mov eax, dword ptr [0xa41a78]
// 00896977  50                   push eax
// 00896978  c705841aa40000000000 mov dword ptr [0xa41a84], 0
// 00896982  c705881aa40000000000 mov dword ptr [0xa41a88], 0
// 0089698c  c7058c1aa40000000000 mov dword ptr [0xa41a8c], 0
// 00896996  e89720e8ff           call 0x718a32
// 0089699b  59                   pop ecx
// 0089699c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
