// roc 2011-06 00a3a340  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a340
//
// 00a3a340  a17cc6cc00           mov eax, dword ptr [0xccc67c]
// 00a3a345  85c0                 test eax, eax
// 00a3a347  7409                 je 0xa3a352
// 00a3a349  50                   push eax
// 00a3a34a  e809fddcff           call 0x80a058
// 00a3a34f  83c404               add esp, 4
// 00a3a352  c70560c6cc00e0bea500 mov dword ptr [0xccc660], 0xa5bee0
// 00a3a35c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
