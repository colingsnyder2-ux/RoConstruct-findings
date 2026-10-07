// roc 2011-06 00a3bac0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bac0
//
// 00a3bac0  a180f4cc00           mov eax, dword ptr [0xccf480]
// 00a3bac5  85c0                 test eax, eax
// 00a3bac7  7409                 je 0xa3bad2
// 00a3bac9  50                   push eax
// 00a3baca  e889e5dcff           call 0x80a058
// 00a3bacf  83c404               add esp, 4
// 00a3bad2  c70564f4cc00e0bea500 mov dword ptr [0xccf464], 0xa5bee0
// 00a3badc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
