// roc 2011-06 00a39420  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39420
//
// 00a39420  a1e4aacc00           mov eax, dword ptr [0xccaae4]
// 00a39425  85c0                 test eax, eax
// 00a39427  7409                 je 0xa39432
// 00a39429  50                   push eax
// 00a3942a  e8290cddff           call 0x80a058
// 00a3942f  83c404               add esp, 4
// 00a39432  c705e4aacc0000000000 mov dword ptr [0xccaae4], 0
// 00a3943c  c705e8aacc0000000000 mov dword ptr [0xccaae8], 0
// 00a39446  c705ecaacc0000000000 mov dword ptr [0xccaaec], 0
// 00a39450  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
