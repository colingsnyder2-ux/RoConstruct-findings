// roc 2011-06 00a34470  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34470
//
// 00a34470  a170b6cb00           mov eax, dword ptr [0xcbb670]
// 00a34475  85c0                 test eax, eax
// 00a34477  7409                 je 0xa34482
// 00a34479  50                   push eax
// 00a3447a  e8d95bddff           call 0x80a058
// 00a3447f  83c404               add esp, 4
// 00a34482  c70554b6cb00e0bea500 mov dword ptr [0xcbb654], 0xa5bee0
// 00a3448c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
