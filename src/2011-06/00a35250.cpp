// roc 2011-06 00a35250  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35250
//
// 00a35250  a17ccecb00           mov eax, dword ptr [0xcbce7c]
// 00a35255  85c0                 test eax, eax
// 00a35257  7409                 je 0xa35262
// 00a35259  50                   push eax
// 00a3525a  e8f94dddff           call 0x80a058
// 00a3525f  83c404               add esp, 4
// 00a35262  c70560cecb00e0bea500 mov dword ptr [0xcbce60], 0xa5bee0
// 00a3526c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
