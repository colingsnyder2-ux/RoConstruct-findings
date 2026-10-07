// roc 2011-06 00a3ef60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ef60
//
// 00a3ef60  a1d445cd00           mov eax, dword ptr [0xcd45d4]
// 00a3ef65  85c0                 test eax, eax
// 00a3ef67  7409                 je 0xa3ef72
// 00a3ef69  50                   push eax
// 00a3ef6a  e8e9b0dcff           call 0x80a058
// 00a3ef6f  83c404               add esp, 4
// 00a3ef72  c705b845cd00e0bea500 mov dword ptr [0xcd45b8], 0xa5bee0
// 00a3ef7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
