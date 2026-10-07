// roc 2011-06 00a3a040  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a040
//
// 00a3a040  a11cc5cc00           mov eax, dword ptr [0xccc51c]
// 00a3a045  85c0                 test eax, eax
// 00a3a047  7409                 je 0xa3a052
// 00a3a049  50                   push eax
// 00a3a04a  e80900ddff           call 0x80a058
// 00a3a04f  83c404               add esp, 4
// 00a3a052  c70500c5cc00e0bea500 mov dword ptr [0xccc500], 0xa5bee0
// 00a3a05c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
