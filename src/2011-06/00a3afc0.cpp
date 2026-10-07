// roc 2011-06 00a3afc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3afc0
//
// 00a3afc0  a1dce2cc00           mov eax, dword ptr [0xcce2dc]
// 00a3afc5  85c0                 test eax, eax
// 00a3afc7  7409                 je 0xa3afd2
// 00a3afc9  50                   push eax
// 00a3afca  e889f0dcff           call 0x80a058
// 00a3afcf  83c404               add esp, 4
// 00a3afd2  c705c0e2cc00e0bea500 mov dword ptr [0xcce2c0], 0xa5bee0
// 00a3afdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
