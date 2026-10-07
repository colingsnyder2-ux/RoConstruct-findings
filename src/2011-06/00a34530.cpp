// roc 2011-06 00a34530  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34530
//
// 00a34530  a1fcb1cb00           mov eax, dword ptr [0xcbb1fc]
// 00a34535  85c0                 test eax, eax
// 00a34537  7409                 je 0xa34542
// 00a34539  50                   push eax
// 00a3453a  e8195bddff           call 0x80a058
// 00a3453f  83c404               add esp, 4
// 00a34542  c705e0b1cb00e0bea500 mov dword ptr [0xcbb1e0], 0xa5bee0
// 00a3454c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
