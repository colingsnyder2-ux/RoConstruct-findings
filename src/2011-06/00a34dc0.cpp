// roc 2011-06 00a34dc0  unit: seg_00a30000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34dc0
//
// 00a34dc0  a1bcbacb00           mov eax, dword ptr [0xcbbabc]
// 00a34dc5  85c0                 test eax, eax
// 00a34dc7  7409                 je 0xa34dd2
// 00a34dc9  50                   push eax
// 00a34dca  e88952ddff           call 0x80a058
// 00a34dcf  83c404               add esp, 4
// 00a34dd2  c705bcbacb0000000000 mov dword ptr [0xcbbabc], 0
// 00a34ddc  c705c0bacb0000000000 mov dword ptr [0xcbbac0], 0
// 00a34de6  c705c4bacb0000000000 mov dword ptr [0xcbbac4], 0
// 00a34df0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
