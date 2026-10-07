// roc 2011-06 00a34a50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34a50
//
// 00a34a50  a1d8b2cb00           mov eax, dword ptr [0xcbb2d8]
// 00a34a55  85c0                 test eax, eax
// 00a34a57  7409                 je 0xa34a62
// 00a34a59  50                   push eax
// 00a34a5a  e8f955ddff           call 0x80a058
// 00a34a5f  83c404               add esp, 4
// 00a34a62  c705bcb2cb00e0bea500 mov dword ptr [0xcbb2bc], 0xa5bee0
// 00a34a6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
