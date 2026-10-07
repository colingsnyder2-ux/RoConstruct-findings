// roc 2011-06 00a3a280  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a280
//
// 00a3a280  a17cc5cc00           mov eax, dword ptr [0xccc57c]
// 00a3a285  85c0                 test eax, eax
// 00a3a287  7409                 je 0xa3a292
// 00a3a289  50                   push eax
// 00a3a28a  e8c9fddcff           call 0x80a058
// 00a3a28f  83c404               add esp, 4
// 00a3a292  c70560c5cc00e0bea500 mov dword ptr [0xccc560], 0xa5bee0
// 00a3a29c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
