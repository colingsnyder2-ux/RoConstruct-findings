// roc 2011-06 00a3cec0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cec0
//
// 00a3cec0  a14c17cd00           mov eax, dword ptr [0xcd174c]
// 00a3cec5  85c0                 test eax, eax
// 00a3cec7  7409                 je 0xa3ced2
// 00a3cec9  50                   push eax
// 00a3ceca  e889d1dcff           call 0x80a058
// 00a3cecf  83c404               add esp, 4
// 00a3ced2  c7053017cd00e0bea500 mov dword ptr [0xcd1730], 0xa5bee0
// 00a3cedc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
