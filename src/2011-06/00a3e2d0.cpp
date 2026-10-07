// roc 2011-06 00a3e2d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e2d0
//
// 00a3e2d0  a17833cd00           mov eax, dword ptr [0xcd3378]
// 00a3e2d5  85c0                 test eax, eax
// 00a3e2d7  7409                 je 0xa3e2e2
// 00a3e2d9  50                   push eax
// 00a3e2da  e879bddcff           call 0x80a058
// 00a3e2df  83c404               add esp, 4
// 00a3e2e2  c7055c33cd00e0bea500 mov dword ptr [0xcd335c], 0xa5bee0
// 00a3e2ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
