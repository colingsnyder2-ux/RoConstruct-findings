// roc 2011-06 00a3bfa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bfa0
//
// 00a3bfa0  a1fcfbcc00           mov eax, dword ptr [0xccfbfc]
// 00a3bfa5  85c0                 test eax, eax
// 00a3bfa7  7409                 je 0xa3bfb2
// 00a3bfa9  50                   push eax
// 00a3bfaa  e8a9e0dcff           call 0x80a058
// 00a3bfaf  83c404               add esp, 4
// 00a3bfb2  c705e0fbcc00e0bea500 mov dword ptr [0xccfbe0], 0xa5bee0
// 00a3bfbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
