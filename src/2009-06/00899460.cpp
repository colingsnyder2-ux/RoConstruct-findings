// roc 2009-06 00899460  unit: seg_00890000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899460
//
// 00899460  a154a8a400           mov eax, dword ptr [0xa4a854]
// 00899465  85c0                 test eax, eax
// 00899467  7409                 je 0x899472
// 00899469  50                   push eax
// 0089946a  e8c3f5e7ff           call 0x718a32
// 0089946f  83c404               add esp, 4
// 00899472  a148a8a400           mov eax, dword ptr [0xa4a848]
// 00899477  50                   push eax
// 00899478  c70554a8a40000000000 mov dword ptr [0xa4a854], 0
// 00899482  c70558a8a40000000000 mov dword ptr [0xa4a858], 0
// 0089948c  c7055ca8a40000000000 mov dword ptr [0xa4a85c], 0
// 00899496  e897f5e7ff           call 0x718a32
// 0089949b  59                   pop ecx
// 0089949c  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
