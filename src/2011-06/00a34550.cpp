// roc 2011-06 00a34550  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34550
//
// 00a34550  a124bacb00           mov eax, dword ptr [0xcbba24]
// 00a34555  85c0                 test eax, eax
// 00a34557  7409                 je 0xa34562
// 00a34559  50                   push eax
// 00a3455a  e8f95addff           call 0x80a058
// 00a3455f  83c404               add esp, 4
// 00a34562  c70508bacb00e0bea500 mov dword ptr [0xcbba08], 0xa5bee0
// 00a3456c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
