// roc 2009-06 00896720  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896720
//
// 00896720  a1801ba400           mov eax, dword ptr [0xa41b80]
// 00896725  85c0                 test eax, eax
// 00896727  7409                 je 0x896732
// 00896729  50                   push eax
// 0089672a  e80323e8ff           call 0x718a32
// 0089672f  83c404               add esp, 4
// 00896732  a1741ba400           mov eax, dword ptr [0xa41b74]
// 00896737  50                   push eax
// 00896738  c705801ba40000000000 mov dword ptr [0xa41b80], 0
// 00896742  c705841ba40000000000 mov dword ptr [0xa41b84], 0
// 0089674c  c705881ba40000000000 mov dword ptr [0xa41b88], 0
// 00896756  e8d722e8ff           call 0x718a32
// 0089675b  59                   pop ecx
// 0089675c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
