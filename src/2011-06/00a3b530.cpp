// roc 2011-06 00a3b530  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b530
//
// 00a3b530  a158e9cc00           mov eax, dword ptr [0xcce958]
// 00a3b535  85c0                 test eax, eax
// 00a3b537  7409                 je 0xa3b542
// 00a3b539  50                   push eax
// 00a3b53a  e819ebdcff           call 0x80a058
// 00a3b53f  83c404               add esp, 4
// 00a3b542  c70538e9cc00e0bea500 mov dword ptr [0xcce938], 0xa5bee0
// 00a3b54c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
