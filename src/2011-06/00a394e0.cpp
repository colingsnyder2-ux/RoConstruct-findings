// roc 2011-06 00a394e0  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a394e0
//
// 00a394e0  a1fcaacc00           mov eax, dword ptr [0xccaafc]
// 00a394e5  85c0                 test eax, eax
// 00a394e7  7409                 je 0xa394f2
// 00a394e9  50                   push eax
// 00a394ea  e8690bddff           call 0x80a058
// 00a394ef  83c404               add esp, 4
// 00a394f2  c705fcaacc0000000000 mov dword ptr [0xccaafc], 0
// 00a394fc  c70500abcc0000000000 mov dword ptr [0xccab00], 0
// 00a39506  c70504abcc0000000000 mov dword ptr [0xccab04], 0
// 00a39510  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
