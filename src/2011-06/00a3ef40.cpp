// roc 2011-06 00a3ef40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ef40
//
// 00a3ef40  a1f445cd00           mov eax, dword ptr [0xcd45f4]
// 00a3ef45  85c0                 test eax, eax
// 00a3ef47  7409                 je 0xa3ef52
// 00a3ef49  50                   push eax
// 00a3ef4a  e809b1dcff           call 0x80a058
// 00a3ef4f  83c404               add esp, 4
// 00a3ef52  c705d845cd00e0bea500 mov dword ptr [0xcd45d8], 0xa5bee0
// 00a3ef5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
