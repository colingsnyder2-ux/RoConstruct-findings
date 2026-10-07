// roc 2011-06 00a3afe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3afe0
//
// 00a3afe0  a1e4e0cc00           mov eax, dword ptr [0xcce0e4]
// 00a3afe5  85c0                 test eax, eax
// 00a3afe7  7409                 je 0xa3aff2
// 00a3afe9  50                   push eax
// 00a3afea  e869f0dcff           call 0x80a058
// 00a3afef  83c404               add esp, 4
// 00a3aff2  c705c8e0cc00e0bea500 mov dword ptr [0xcce0c8], 0xa5bee0
// 00a3affc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
