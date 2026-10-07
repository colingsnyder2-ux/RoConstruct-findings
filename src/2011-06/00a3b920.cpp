// roc 2011-06 00a3b920  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b920
//
// 00a3b920  a1b4f1cc00           mov eax, dword ptr [0xccf1b4]
// 00a3b925  85c0                 test eax, eax
// 00a3b927  7409                 je 0xa3b932
// 00a3b929  50                   push eax
// 00a3b92a  e829e7dcff           call 0x80a058
// 00a3b92f  83c404               add esp, 4
// 00a3b932  c70598f1cc00e0bea500 mov dword ptr [0xccf198], 0xa5bee0
// 00a3b93c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
