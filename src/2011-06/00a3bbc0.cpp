// roc 2011-06 00a3bbc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bbc0
//
// 00a3bbc0  a1bcf5cc00           mov eax, dword ptr [0xccf5bc]
// 00a3bbc5  85c0                 test eax, eax
// 00a3bbc7  7409                 je 0xa3bbd2
// 00a3bbc9  50                   push eax
// 00a3bbca  e889e4dcff           call 0x80a058
// 00a3bbcf  83c404               add esp, 4
// 00a3bbd2  c705a0f5cc00e0bea500 mov dword ptr [0xccf5a0], 0xa5bee0
// 00a3bbdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
