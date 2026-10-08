// roc 2007-08 0077a690  unit: seg_00770000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a690
//
// 0077a690  a12c338c00           mov eax, dword ptr [0x8c332c]
// 0077a695  85c0                 test eax, eax
// 0077a697  7409                 je 0x77a6a2
// 0077a699  50                   push eax
// 0077a69a  e8c355ebff           call 0x62fc62
// 0077a69f  83c404               add esp, 4
// 0077a6a2  c7052c338c0000000000 mov dword ptr [0x8c332c], 0
// 0077a6ac  c70530338c0000000000 mov dword ptr [0x8c3330], 0
// 0077a6b6  c70534338c0000000000 mov dword ptr [0x8c3334], 0
// 0077a6c0  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??__Fs@?1??allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
