// roc 2011-06 00a3a120  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a120
//
// 00a3a120  a1fcc4cc00           mov eax, dword ptr [0xccc4fc]
// 00a3a125  85c0                 test eax, eax
// 00a3a127  7409                 je 0xa3a132
// 00a3a129  50                   push eax
// 00a3a12a  e829ffdcff           call 0x80a058
// 00a3a12f  83c404               add esp, 4
// 00a3a132  c705e0c4cc00e0bea500 mov dword ptr [0xccc4e0], 0xa5bee0
// 00a3a13c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
