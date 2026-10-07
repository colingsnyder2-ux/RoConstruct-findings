// roc 2011-06 00a3b8b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b8b0
//
// 00a3b8b0  a134f1cc00           mov eax, dword ptr [0xccf134]
// 00a3b8b5  85c0                 test eax, eax
// 00a3b8b7  7409                 je 0xa3b8c2
// 00a3b8b9  50                   push eax
// 00a3b8ba  e899e7dcff           call 0x80a058
// 00a3b8bf  83c404               add esp, 4
// 00a3b8c2  c70518f1cc00e0bea500 mov dword ptr [0xccf118], 0xa5bee0
// 00a3b8cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
