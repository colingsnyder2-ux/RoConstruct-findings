// roc 2011-06 00a3c120  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c120
//
// 00a3c120  a174fdcc00           mov eax, dword ptr [0xccfd74]
// 00a3c125  85c0                 test eax, eax
// 00a3c127  7409                 je 0xa3c132
// 00a3c129  50                   push eax
// 00a3c12a  e829dfdcff           call 0x80a058
// 00a3c12f  83c404               add esp, 4
// 00a3c132  c70558fdcc00e0bea500 mov dword ptr [0xccfd58], 0xa5bee0
// 00a3c13c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
