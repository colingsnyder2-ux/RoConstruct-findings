// roc 2009-06 00896760  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896760
//
// 00896760  a1641ba400           mov eax, dword ptr [0xa41b64]
// 00896765  85c0                 test eax, eax
// 00896767  7409                 je 0x896772
// 00896769  50                   push eax
// 0089676a  e8c322e8ff           call 0x718a32
// 0089676f  83c404               add esp, 4
// 00896772  a1581ba400           mov eax, dword ptr [0xa41b58]
// 00896777  50                   push eax
// 00896778  c705641ba40000000000 mov dword ptr [0xa41b64], 0
// 00896782  c705681ba40000000000 mov dword ptr [0xa41b68], 0
// 0089678c  c7056c1ba40000000000 mov dword ptr [0xa41b6c], 0
// 00896796  e89722e8ff           call 0x718a32
// 0089679b  59                   pop ecx
// 0089679c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
