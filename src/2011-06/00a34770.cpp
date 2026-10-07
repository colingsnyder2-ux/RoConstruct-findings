// roc 2011-06 00a34770  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34770
//
// 00a34770  a1c0b4cb00           mov eax, dword ptr [0xcbb4c0]
// 00a34775  85c0                 test eax, eax
// 00a34777  7409                 je 0xa34782
// 00a34779  50                   push eax
// 00a3477a  e8d958ddff           call 0x80a058
// 00a3477f  83c404               add esp, 4
// 00a34782  c705a4b4cb00e0bea500 mov dword ptr [0xcbb4a4], 0xa5bee0
// 00a3478c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
