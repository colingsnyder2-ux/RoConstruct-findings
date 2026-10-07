// roc 2009-06 00899420  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899420
//
// 00899420  a118a8a400           mov eax, dword ptr [0xa4a818]
// 00899425  85c0                 test eax, eax
// 00899427  7409                 je 0x899432
// 00899429  50                   push eax
// 0089942a  e803f6e7ff           call 0x718a32
// 0089942f  83c404               add esp, 4
// 00899432  a10ca8a400           mov eax, dword ptr [0xa4a80c]
// 00899437  50                   push eax
// 00899438  c70518a8a40000000000 mov dword ptr [0xa4a818], 0
// 00899442  c7051ca8a40000000000 mov dword ptr [0xa4a81c], 0
// 0089944c  c70520a8a40000000000 mov dword ptr [0xa4a820], 0
// 00899456  e8d7f5e7ff           call 0x718a32
// 0089945b  59                   pop ecx
// 0089945c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
