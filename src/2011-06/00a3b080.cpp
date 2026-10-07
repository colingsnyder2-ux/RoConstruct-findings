// roc 2011-06 00a3b080  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b080
//
// 00a3b080  a19ce2cc00           mov eax, dword ptr [0xcce29c]
// 00a3b085  85c0                 test eax, eax
// 00a3b087  7409                 je 0xa3b092
// 00a3b089  50                   push eax
// 00a3b08a  e8c9efdcff           call 0x80a058
// 00a3b08f  83c404               add esp, 4
// 00a3b092  c70580e2cc00e0bea500 mov dword ptr [0xcce280], 0xa5bee0
// 00a3b09c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
