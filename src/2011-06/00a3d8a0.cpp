// roc 2011-06 00a3d8a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d8a0
//
// 00a3d8a0  a1dc25cd00           mov eax, dword ptr [0xcd25dc]
// 00a3d8a5  85c0                 test eax, eax
// 00a3d8a7  7409                 je 0xa3d8b2
// 00a3d8a9  50                   push eax
// 00a3d8aa  e8a9c7dcff           call 0x80a058
// 00a3d8af  83c404               add esp, 4
// 00a3d8b2  c705c025cd00e0bea500 mov dword ptr [0xcd25c0], 0xa5bee0
// 00a3d8bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
