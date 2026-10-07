// roc 2011-06 00a3b0c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b0c0
//
// 00a3b0c0  a17ce3cc00           mov eax, dword ptr [0xcce37c]
// 00a3b0c5  85c0                 test eax, eax
// 00a3b0c7  7409                 je 0xa3b0d2
// 00a3b0c9  50                   push eax
// 00a3b0ca  e889efdcff           call 0x80a058
// 00a3b0cf  83c404               add esp, 4
// 00a3b0d2  c70560e3cc00e0bea500 mov dword ptr [0xcce360], 0xa5bee0
// 00a3b0dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
