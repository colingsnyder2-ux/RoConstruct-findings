// roc 2009-06 008969a0  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008969a0
//
// 008969a0  a1681aa400           mov eax, dword ptr [0xa41a68]
// 008969a5  85c0                 test eax, eax
// 008969a7  7409                 je 0x8969b2
// 008969a9  50                   push eax
// 008969aa  e88320e8ff           call 0x718a32
// 008969af  83c404               add esp, 4
// 008969b2  a15c1aa400           mov eax, dword ptr [0xa41a5c]
// 008969b7  50                   push eax
// 008969b8  c705681aa40000000000 mov dword ptr [0xa41a68], 0
// 008969c2  c7056c1aa40000000000 mov dword ptr [0xa41a6c], 0
// 008969cc  c705701aa40000000000 mov dword ptr [0xa41a70], 0
// 008969d6  e85720e8ff           call 0x718a32
// 008969db  59                   pop ecx
// 008969dc  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
