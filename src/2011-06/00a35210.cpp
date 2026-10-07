// roc 2011-06 00a35210  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35210
//
// 00a35210  a100cfcb00           mov eax, dword ptr [0xcbcf00]
// 00a35215  85c0                 test eax, eax
// 00a35217  7409                 je 0xa35222
// 00a35219  50                   push eax
// 00a3521a  e8394eddff           call 0x80a058
// 00a3521f  83c404               add esp, 4
// 00a35222  c705e4cecb00e0bea500 mov dword ptr [0xcbcee4], 0xa5bee0
// 00a3522c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
