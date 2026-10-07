// roc 2011-06 00a34450  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34450
//
// 00a34450  a1b4b8cb00           mov eax, dword ptr [0xcbb8b4]
// 00a34455  85c0                 test eax, eax
// 00a34457  7409                 je 0xa34462
// 00a34459  50                   push eax
// 00a3445a  e8f95bddff           call 0x80a058
// 00a3445f  83c404               add esp, 4
// 00a34462  c70598b8cb00e0bea500 mov dword ptr [0xcbb898], 0xa5bee0
// 00a3446c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
