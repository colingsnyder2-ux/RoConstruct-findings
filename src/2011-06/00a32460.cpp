// roc 2011-06 00a32460  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32460
//
// 00a32460  a16c5ccb00           mov eax, dword ptr [0xcb5c6c]
// 00a32465  85c0                 test eax, eax
// 00a32467  7409                 je 0xa32472
// 00a32469  50                   push eax
// 00a3246a  e8e97bddff           call 0x80a058
// 00a3246f  83c404               add esp, 4
// 00a32472  c705505ccb00e0bea500 mov dword ptr [0xcb5c50], 0xa5bee0
// 00a3247c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
