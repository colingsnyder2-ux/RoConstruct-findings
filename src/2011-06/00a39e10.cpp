// roc 2011-06 00a39e10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39e10
//
// 00a39e10  a178c2cc00           mov eax, dword ptr [0xccc278]
// 00a39e15  85c0                 test eax, eax
// 00a39e17  7409                 je 0xa39e22
// 00a39e19  50                   push eax
// 00a39e1a  e83902ddff           call 0x80a058
// 00a39e1f  83c404               add esp, 4
// 00a39e22  c7055cc2cc00e0bea500 mov dword ptr [0xccc25c], 0xa5bee0
// 00a39e2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
