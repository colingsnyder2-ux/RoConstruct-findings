// roc 2011-06 00a3b5f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b5f0
//
// 00a3b5f0  a104e9cc00           mov eax, dword ptr [0xcce904]
// 00a3b5f5  85c0                 test eax, eax
// 00a3b5f7  7409                 je 0xa3b602
// 00a3b5f9  50                   push eax
// 00a3b5fa  e859eadcff           call 0x80a058
// 00a3b5ff  83c404               add esp, 4
// 00a3b602  c705e8e8cc00e0bea500 mov dword ptr [0xcce8e8], 0xa5bee0
// 00a3b60c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
