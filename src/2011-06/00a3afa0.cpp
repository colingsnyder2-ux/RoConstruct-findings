// roc 2011-06 00a3afa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3afa0
//
// 00a3afa0  a108e1cc00           mov eax, dword ptr [0xcce108]
// 00a3afa5  85c0                 test eax, eax
// 00a3afa7  7409                 je 0xa3afb2
// 00a3afa9  50                   push eax
// 00a3afaa  e8a9f0dcff           call 0x80a058
// 00a3afaf  83c404               add esp, 4
// 00a3afb2  c705ece0cc00e0bea500 mov dword ptr [0xcce0ec], 0xa5bee0
// 00a3afbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
