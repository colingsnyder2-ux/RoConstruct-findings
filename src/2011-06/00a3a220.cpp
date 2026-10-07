// roc 2011-06 00a3a220  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a220
//
// 00a3a220  a19cc7cc00           mov eax, dword ptr [0xccc79c]
// 00a3a225  85c0                 test eax, eax
// 00a3a227  7409                 je 0xa3a232
// 00a3a229  50                   push eax
// 00a3a22a  e829fedcff           call 0x80a058
// 00a3a22f  83c404               add esp, 4
// 00a3a232  c70580c7cc00e0bea500 mov dword ptr [0xccc780], 0xa5bee0
// 00a3a23c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
