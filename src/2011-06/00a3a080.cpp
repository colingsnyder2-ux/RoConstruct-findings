// roc 2011-06 00a3a080  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a080
//
// 00a3a080  a19cc6cc00           mov eax, dword ptr [0xccc69c]
// 00a3a085  85c0                 test eax, eax
// 00a3a087  7409                 je 0xa3a092
// 00a3a089  50                   push eax
// 00a3a08a  e8c9ffdcff           call 0x80a058
// 00a3a08f  83c404               add esp, 4
// 00a3a092  c70580c6cc00e0bea500 mov dword ptr [0xccc680], 0xa5bee0
// 00a3a09c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
