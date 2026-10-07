// roc 2011-06 00a3d460  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d460
//
// 00a3d460  a1881ecd00           mov eax, dword ptr [0xcd1e88]
// 00a3d465  85c0                 test eax, eax
// 00a3d467  7409                 je 0xa3d472
// 00a3d469  50                   push eax
// 00a3d46a  e8e9cbdcff           call 0x80a058
// 00a3d46f  83c404               add esp, 4
// 00a3d472  c7056c1ecd00e0bea500 mov dword ptr [0xcd1e6c], 0xa5bee0
// 00a3d47c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
