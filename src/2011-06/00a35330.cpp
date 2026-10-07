// roc 2011-06 00a35330  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35330
//
// 00a35330  a12ccecb00           mov eax, dword ptr [0xcbce2c]
// 00a35335  85c0                 test eax, eax
// 00a35337  7409                 je 0xa35342
// 00a35339  50                   push eax
// 00a3533a  e8194dddff           call 0x80a058
// 00a3533f  83c404               add esp, 4
// 00a35342  c70510cecb00e0bea500 mov dword ptr [0xcbce10], 0xa5bee0
// 00a3534c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
