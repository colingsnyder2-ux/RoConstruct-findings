// roc 2011-06 00a3b220  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b220
//
// 00a3b220  a144e2cc00           mov eax, dword ptr [0xcce244]
// 00a3b225  85c0                 test eax, eax
// 00a3b227  7409                 je 0xa3b232
// 00a3b229  50                   push eax
// 00a3b22a  e829eedcff           call 0x80a058
// 00a3b22f  83c404               add esp, 4
// 00a3b232  c70528e2cc00e0bea500 mov dword ptr [0xcce228], 0xa5bee0
// 00a3b23c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
