// roc 2011-06 00a39ed0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39ed0
//
// 00a39ed0  a190c3cc00           mov eax, dword ptr [0xccc390]
// 00a39ed5  85c0                 test eax, eax
// 00a39ed7  7409                 je 0xa39ee2
// 00a39ed9  50                   push eax
// 00a39eda  e87901ddff           call 0x80a058
// 00a39edf  83c404               add esp, 4
// 00a39ee2  c70574c3cc00e0bea500 mov dword ptr [0xccc374], 0xa5bee0
// 00a39eec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
