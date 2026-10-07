// roc 2011-06 00a39ce0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39ce0
//
// 00a39ce0  a128c0cc00           mov eax, dword ptr [0xccc028]
// 00a39ce5  85c0                 test eax, eax
// 00a39ce7  7409                 je 0xa39cf2
// 00a39ce9  50                   push eax
// 00a39cea  e86903ddff           call 0x80a058
// 00a39cef  83c404               add esp, 4
// 00a39cf2  c7050cc0cc00e0bea500 mov dword ptr [0xccc00c], 0xa5bee0
// 00a39cfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
