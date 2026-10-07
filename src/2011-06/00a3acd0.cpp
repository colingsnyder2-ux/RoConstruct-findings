// roc 2011-06 00a3acd0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3acd0
//
// 00a3acd0  a160dacc00           mov eax, dword ptr [0xccda60]
// 00a3acd5  85c0                 test eax, eax
// 00a3acd7  7409                 je 0xa3ace2
// 00a3acd9  50                   push eax
// 00a3acda  e879f3dcff           call 0x80a058
// 00a3acdf  83c404               add esp, 4
// 00a3ace2  c70544dacc00e0bea500 mov dword ptr [0xccda44], 0xa5bee0
// 00a3acec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
