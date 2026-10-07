// roc 2011-06 00a3a140  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a140
//
// 00a3a140  a17cc8cc00           mov eax, dword ptr [0xccc87c]
// 00a3a145  85c0                 test eax, eax
// 00a3a147  7409                 je 0xa3a152
// 00a3a149  50                   push eax
// 00a3a14a  e809ffdcff           call 0x80a058
// 00a3a14f  83c404               add esp, 4
// 00a3a152  c70560c8cc00e0bea500 mov dword ptr [0xccc860], 0xa5bee0
// 00a3a15c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
