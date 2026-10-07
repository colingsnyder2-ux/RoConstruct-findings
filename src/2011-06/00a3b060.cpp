// roc 2011-06 00a3b060  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b060
//
// 00a3b060  a12ce0cc00           mov eax, dword ptr [0xcce02c]
// 00a3b065  85c0                 test eax, eax
// 00a3b067  7409                 je 0xa3b072
// 00a3b069  50                   push eax
// 00a3b06a  e8e9efdcff           call 0x80a058
// 00a3b06f  83c404               add esp, 4
// 00a3b072  c70510e0cc00e0bea500 mov dword ptr [0xcce010], 0xa5bee0
// 00a3b07c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
