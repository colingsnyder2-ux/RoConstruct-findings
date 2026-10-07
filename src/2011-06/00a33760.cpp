// roc 2011-06 00a33760  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33760
//
// 00a33760  a1087dcb00           mov eax, dword ptr [0xcb7d08]
// 00a33765  85c0                 test eax, eax
// 00a33767  7409                 je 0xa33772
// 00a33769  50                   push eax
// 00a3376a  e8e968ddff           call 0x80a058
// 00a3376f  83c404               add esp, 4
// 00a33772  c705ec7ccb00e0bea500 mov dword ptr [0xcb7cec], 0xa5bee0
// 00a3377c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
