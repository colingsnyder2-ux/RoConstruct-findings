// roc 2011-06 00a348b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a348b0
//
// 00a348b0  a17cb1cb00           mov eax, dword ptr [0xcbb17c]
// 00a348b5  85c0                 test eax, eax
// 00a348b7  7409                 je 0xa348c2
// 00a348b9  50                   push eax
// 00a348ba  e89957ddff           call 0x80a058
// 00a348bf  83c404               add esp, 4
// 00a348c2  c70560b1cb00e0bea500 mov dword ptr [0xcbb160], 0xa5bee0
// 00a348cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
