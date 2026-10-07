// roc 2011-06 00a34930  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34930
//
// 00a34930  a130b8cb00           mov eax, dword ptr [0xcbb830]
// 00a34935  85c0                 test eax, eax
// 00a34937  7409                 je 0xa34942
// 00a34939  50                   push eax
// 00a3493a  e81957ddff           call 0x80a058
// 00a3493f  83c404               add esp, 4
// 00a34942  c70510b8cb00e0bea500 mov dword ptr [0xcbb810], 0xa5bee0
// 00a3494c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
