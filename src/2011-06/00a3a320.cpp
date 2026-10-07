// roc 2011-06 00a3a320  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a320
//
// 00a3a320  a11cc4cc00           mov eax, dword ptr [0xccc41c]
// 00a3a325  85c0                 test eax, eax
// 00a3a327  7409                 je 0xa3a332
// 00a3a329  50                   push eax
// 00a3a32a  e829fddcff           call 0x80a058
// 00a3a32f  83c404               add esp, 4
// 00a3a332  c70500c4cc00e0bea500 mov dword ptr [0xccc400], 0xa5bee0
// 00a3a33c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
