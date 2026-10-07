// roc 2011-06 00a3a2c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a2c0
//
// 00a3a2c0  a1dcc7cc00           mov eax, dword ptr [0xccc7dc]
// 00a3a2c5  85c0                 test eax, eax
// 00a3a2c7  7409                 je 0xa3a2d2
// 00a3a2c9  50                   push eax
// 00a3a2ca  e889fddcff           call 0x80a058
// 00a3a2cf  83c404               add esp, 4
// 00a3a2d2  c705c0c7cc00e0bea500 mov dword ptr [0xccc7c0], 0xa5bee0
// 00a3a2dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
