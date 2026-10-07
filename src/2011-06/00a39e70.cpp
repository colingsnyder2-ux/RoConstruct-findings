// roc 2011-06 00a39e70  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39e70
//
// 00a39e70  a1e8c2cc00           mov eax, dword ptr [0xccc2e8]
// 00a39e75  85c0                 test eax, eax
// 00a39e77  7409                 je 0xa39e82
// 00a39e79  50                   push eax
// 00a39e7a  e8d901ddff           call 0x80a058
// 00a39e7f  83c404               add esp, 4
// 00a39e82  c705ccc2cc00e0bea500 mov dword ptr [0xccc2cc], 0xa5bee0
// 00a39e8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
