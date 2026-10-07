// roc 2011-06 00a34b90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34b90
//
// 00a34b90  a184b9cb00           mov eax, dword ptr [0xcbb984]
// 00a34b95  85c0                 test eax, eax
// 00a34b97  7409                 je 0xa34ba2
// 00a34b99  50                   push eax
// 00a34b9a  e8b954ddff           call 0x80a058
// 00a34b9f  83c404               add esp, 4
// 00a34ba2  c70568b9cb00e0bea500 mov dword ptr [0xcbb968], 0xa5bee0
// 00a34bac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
