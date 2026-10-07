// roc 2011-06 00a3b550  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b550
//
// 00a3b550  a1ece9cc00           mov eax, dword ptr [0xcce9ec]
// 00a3b555  85c0                 test eax, eax
// 00a3b557  7409                 je 0xa3b562
// 00a3b559  50                   push eax
// 00a3b55a  e8f9eadcff           call 0x80a058
// 00a3b55f  83c404               add esp, 4
// 00a3b562  c705cce9cc00e0bea500 mov dword ptr [0xcce9cc], 0xa5bee0
// 00a3b56c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
