// roc 2011-06 00a39cc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39cc0
//
// 00a39cc0  a114c1cc00           mov eax, dword ptr [0xccc114]
// 00a39cc5  85c0                 test eax, eax
// 00a39cc7  7409                 je 0xa39cd2
// 00a39cc9  50                   push eax
// 00a39cca  e88903ddff           call 0x80a058
// 00a39ccf  83c404               add esp, 4
// 00a39cd2  c705f4c0cc00e0bea500 mov dword ptr [0xccc0f4], 0xa5bee0
// 00a39cdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
