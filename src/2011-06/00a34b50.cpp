// roc 2011-06 00a34b50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34b50
//
// 00a34b50  a1a4b7cb00           mov eax, dword ptr [0xcbb7a4]
// 00a34b55  85c0                 test eax, eax
// 00a34b57  7409                 je 0xa34b62
// 00a34b59  50                   push eax
// 00a34b5a  e8f954ddff           call 0x80a058
// 00a34b5f  83c404               add esp, 4
// 00a34b62  c70588b7cb00e0bea500 mov dword ptr [0xcbb788], 0xa5bee0
// 00a34b6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
