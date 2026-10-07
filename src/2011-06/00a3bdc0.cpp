// roc 2011-06 00a3bdc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bdc0
//
// 00a3bdc0  a14cf7cc00           mov eax, dword ptr [0xccf74c]
// 00a3bdc5  85c0                 test eax, eax
// 00a3bdc7  7409                 je 0xa3bdd2
// 00a3bdc9  50                   push eax
// 00a3bdca  e889e2dcff           call 0x80a058
// 00a3bdcf  83c404               add esp, 4
// 00a3bdd2  c70530f7cc00e0bea500 mov dword ptr [0xccf730], 0xa5bee0
// 00a3bddc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
