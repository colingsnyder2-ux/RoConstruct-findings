// roc 2011-06 00a3b100  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b100
//
// 00a3b100  a17ce1cc00           mov eax, dword ptr [0xcce17c]
// 00a3b105  85c0                 test eax, eax
// 00a3b107  7409                 je 0xa3b112
// 00a3b109  50                   push eax
// 00a3b10a  e849efdcff           call 0x80a058
// 00a3b10f  83c404               add esp, 4
// 00a3b112  c70560e1cc00e0bea500 mov dword ptr [0xcce160], 0xa5bee0
// 00a3b11c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
