// roc 2011-06 00a39f80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f80
//
// 00a39f80  a15cc6cc00           mov eax, dword ptr [0xccc65c]
// 00a39f85  85c0                 test eax, eax
// 00a39f87  7409                 je 0xa39f92
// 00a39f89  50                   push eax
// 00a39f8a  e8c900ddff           call 0x80a058
// 00a39f8f  83c404               add esp, 4
// 00a39f92  c70540c6cc00e0bea500 mov dword ptr [0xccc640], 0xa5bee0
// 00a39f9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
