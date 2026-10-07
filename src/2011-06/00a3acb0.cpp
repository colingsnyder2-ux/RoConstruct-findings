// roc 2011-06 00a3acb0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3acb0
//
// 00a3acb0  a1fcd9cc00           mov eax, dword ptr [0xccd9fc]
// 00a3acb5  85c0                 test eax, eax
// 00a3acb7  7409                 je 0xa3acc2
// 00a3acb9  50                   push eax
// 00a3acba  e899f3dcff           call 0x80a058
// 00a3acbf  83c404               add esp, 4
// 00a3acc2  c705e0d9cc00e0bea500 mov dword ptr [0xccd9e0], 0xa5bee0
// 00a3accc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
