// roc 2011-06 00a345f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a345f0
//
// 00a345f0  a1d0b6cb00           mov eax, dword ptr [0xcbb6d0]
// 00a345f5  85c0                 test eax, eax
// 00a345f7  7409                 je 0xa34602
// 00a345f9  50                   push eax
// 00a345fa  e8595addff           call 0x80a058
// 00a345ff  83c404               add esp, 4
// 00a34602  c705b4b6cb00e0bea500 mov dword ptr [0xcbb6b4], 0xa5bee0
// 00a3460c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
