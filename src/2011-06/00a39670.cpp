// roc 2011-06 00a39670  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39670
//
// 00a39670  a1bcb2cc00           mov eax, dword ptr [0xccb2bc]
// 00a39675  85c0                 test eax, eax
// 00a39677  7409                 je 0xa39682
// 00a39679  50                   push eax
// 00a3967a  e8d909ddff           call 0x80a058
// 00a3967f  83c404               add esp, 4
// 00a39682  c705a0b2cc00e0bea500 mov dword ptr [0xccb2a0], 0xa5bee0
// 00a3968c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
