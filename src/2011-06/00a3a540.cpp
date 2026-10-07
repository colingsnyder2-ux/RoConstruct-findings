// roc 2011-06 00a3a540  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a540
//
// 00a3a540  a19ccacc00           mov eax, dword ptr [0xccca9c]
// 00a3a545  85c0                 test eax, eax
// 00a3a547  7409                 je 0xa3a552
// 00a3a549  50                   push eax
// 00a3a54a  e809fbdcff           call 0x80a058
// 00a3a54f  83c404               add esp, 4
// 00a3a552  c70580cacc00e0bea500 mov dword ptr [0xccca80], 0xa5bee0
// 00a3a55c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
