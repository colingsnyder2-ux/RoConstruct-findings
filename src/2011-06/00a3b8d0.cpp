// roc 2011-06 00a3b8d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b8d0
//
// 00a3b8d0  a1a8f0cc00           mov eax, dword ptr [0xccf0a8]
// 00a3b8d5  85c0                 test eax, eax
// 00a3b8d7  7409                 je 0xa3b8e2
// 00a3b8d9  50                   push eax
// 00a3b8da  e879e7dcff           call 0x80a058
// 00a3b8df  83c404               add esp, 4
// 00a3b8e2  c7058cf0cc00e0bea500 mov dword ptr [0xccf08c], 0xa5bee0
// 00a3b8ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
