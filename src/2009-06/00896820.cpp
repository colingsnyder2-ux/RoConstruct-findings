// roc 2009-06 00896820  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896820
//
// 00896820  a1101ba400           mov eax, dword ptr [0xa41b10]
// 00896825  85c0                 test eax, eax
// 00896827  7409                 je 0x896832
// 00896829  50                   push eax
// 0089682a  e80322e8ff           call 0x718a32
// 0089682f  83c404               add esp, 4
// 00896832  a1041ba400           mov eax, dword ptr [0xa41b04]
// 00896837  50                   push eax
// 00896838  c705101ba40000000000 mov dword ptr [0xa41b10], 0
// 00896842  c705141ba40000000000 mov dword ptr [0xa41b14], 0
// 0089684c  c705181ba40000000000 mov dword ptr [0xa41b18], 0
// 00896856  e8d721e8ff           call 0x718a32
// 0089685b  59                   pop ecx
// 0089685c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
