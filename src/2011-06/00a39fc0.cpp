// roc 2011-06 00a39fc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39fc0
//
// 00a39fc0  a1bcc7cc00           mov eax, dword ptr [0xccc7bc]
// 00a39fc5  85c0                 test eax, eax
// 00a39fc7  7409                 je 0xa39fd2
// 00a39fc9  50                   push eax
// 00a39fca  e88900ddff           call 0x80a058
// 00a39fcf  83c404               add esp, 4
// 00a39fd2  c705a0c7cc00e0bea500 mov dword ptr [0xccc7a0], 0xa5bee0
// 00a39fdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
