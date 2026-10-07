// roc 2009-06 00896860  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896860
//
// 00896860  a1f41aa400           mov eax, dword ptr [0xa41af4]
// 00896865  85c0                 test eax, eax
// 00896867  7409                 je 0x896872
// 00896869  50                   push eax
// 0089686a  e8c321e8ff           call 0x718a32
// 0089686f  83c404               add esp, 4
// 00896872  a1e81aa400           mov eax, dword ptr [0xa41ae8]
// 00896877  50                   push eax
// 00896878  c705f41aa40000000000 mov dword ptr [0xa41af4], 0
// 00896882  c705f81aa40000000000 mov dword ptr [0xa41af8], 0
// 0089688c  c705fc1aa40000000000 mov dword ptr [0xa41afc], 0
// 00896896  e89721e8ff           call 0x718a32
// 0089689b  59                   pop ecx
// 0089689c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
