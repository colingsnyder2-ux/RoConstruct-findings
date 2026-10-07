// roc 2011-06 00a3eb80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eb80
//
// 00a3eb80  a1703ccd00           mov eax, dword ptr [0xcd3c70]
// 00a3eb85  85c0                 test eax, eax
// 00a3eb87  7409                 je 0xa3eb92
// 00a3eb89  50                   push eax
// 00a3eb8a  e8c9b4dcff           call 0x80a058
// 00a3eb8f  83c404               add esp, 4
// 00a3eb92  c705503ccd00e0bea500 mov dword ptr [0xcd3c50], 0xa5bee0
// 00a3eb9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
