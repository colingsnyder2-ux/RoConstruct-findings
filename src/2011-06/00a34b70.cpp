// roc 2011-06 00a34b70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34b70
//
// 00a34b70  a1c4b7cb00           mov eax, dword ptr [0xcbb7c4]
// 00a34b75  85c0                 test eax, eax
// 00a34b77  7409                 je 0xa34b82
// 00a34b79  50                   push eax
// 00a34b7a  e8d954ddff           call 0x80a058
// 00a34b7f  83c404               add esp, 4
// 00a34b82  c705a8b7cb00e0bea500 mov dword ptr [0xcbb7a8], 0xa5bee0
// 00a34b8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
