// roc 2011-06 00a3b000  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b000
//
// 00a3b000  a1a0e1cc00           mov eax, dword ptr [0xcce1a0]
// 00a3b005  85c0                 test eax, eax
// 00a3b007  7409                 je 0xa3b012
// 00a3b009  50                   push eax
// 00a3b00a  e849f0dcff           call 0x80a058
// 00a3b00f  83c404               add esp, 4
// 00a3b012  c70580e1cc00e0bea500 mov dword ptr [0xcce180], 0xa5bee0
// 00a3b01c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
