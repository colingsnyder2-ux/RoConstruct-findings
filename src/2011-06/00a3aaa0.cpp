// roc 2011-06 00a3aaa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aaa0
//
// 00a3aaa0  a128d3cc00           mov eax, dword ptr [0xccd328]
// 00a3aaa5  85c0                 test eax, eax
// 00a3aaa7  7409                 je 0xa3aab2
// 00a3aaa9  50                   push eax
// 00a3aaaa  e8a9f5dcff           call 0x80a058
// 00a3aaaf  83c404               add esp, 4
// 00a3aab2  c7050cd3cc00e0bea500 mov dword ptr [0xccd30c], 0xa5bee0
// 00a3aabc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
