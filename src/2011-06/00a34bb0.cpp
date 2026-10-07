// roc 2011-06 00a34bb0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34bb0
//
// 00a34bb0  a110b6cb00           mov eax, dword ptr [0xcbb610]
// 00a34bb5  85c0                 test eax, eax
// 00a34bb7  7409                 je 0xa34bc2
// 00a34bb9  50                   push eax
// 00a34bba  e89954ddff           call 0x80a058
// 00a34bbf  83c404               add esp, 4
// 00a34bc2  c705f4b5cb00e0bea500 mov dword ptr [0xcbb5f4], 0xa5bee0
// 00a34bcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
