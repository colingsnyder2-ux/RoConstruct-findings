// roc 2011-06 00a39e50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39e50
//
// 00a39e50  a148c3cc00           mov eax, dword ptr [0xccc348]
// 00a39e55  85c0                 test eax, eax
// 00a39e57  7409                 je 0xa39e62
// 00a39e59  50                   push eax
// 00a39e5a  e8f901ddff           call 0x80a058
// 00a39e5f  83c404               add esp, 4
// 00a39e62  c7052cc3cc00e0bea500 mov dword ptr [0xccc32c], 0xa5bee0
// 00a39e6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
