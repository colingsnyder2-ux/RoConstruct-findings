// roc 2011-06 00a3b180  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b180
//
// 00a3b180  a1c4e0cc00           mov eax, dword ptr [0xcce0c4]
// 00a3b185  85c0                 test eax, eax
// 00a3b187  7409                 je 0xa3b192
// 00a3b189  50                   push eax
// 00a3b18a  e8c9eedcff           call 0x80a058
// 00a3b18f  83c404               add esp, 4
// 00a3b192  c705a8e0cc00e0bea500 mov dword ptr [0xcce0a8], 0xa5bee0
// 00a3b19c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
