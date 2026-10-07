// roc 2011-06 00a3b9b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b9b0
//
// 00a3b9b0  a1ecf2cc00           mov eax, dword ptr [0xccf2ec]
// 00a3b9b5  85c0                 test eax, eax
// 00a3b9b7  7409                 je 0xa3b9c2
// 00a3b9b9  50                   push eax
// 00a3b9ba  e899e6dcff           call 0x80a058
// 00a3b9bf  83c404               add esp, 4
// 00a3b9c2  c705d0f2cc00e0bea500 mov dword ptr [0xccf2d0], 0xa5bee0
// 00a3b9cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
