// roc 2011-06 00a33680  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33680
//
// 00a33680  a1407ccb00           mov eax, dword ptr [0xcb7c40]
// 00a33685  85c0                 test eax, eax
// 00a33687  7409                 je 0xa33692
// 00a33689  50                   push eax
// 00a3368a  e8c969ddff           call 0x80a058
// 00a3368f  83c404               add esp, 4
// 00a33692  c705207ccb00e0bea500 mov dword ptr [0xcb7c20], 0xa5bee0
// 00a3369c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
