// roc 2011-06 00a3a400  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a400
//
// 00a3a400  a15cc4cc00           mov eax, dword ptr [0xccc45c]
// 00a3a405  85c0                 test eax, eax
// 00a3a407  7409                 je 0xa3a412
// 00a3a409  50                   push eax
// 00a3a40a  e849fcdcff           call 0x80a058
// 00a3a40f  83c404               add esp, 4
// 00a3a412  c70540c4cc00e0bea500 mov dword ptr [0xccc440], 0xa5bee0
// 00a3a41c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
