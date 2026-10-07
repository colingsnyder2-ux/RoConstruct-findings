// roc 2011-06 00a3a870  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a870
//
// 00a3a870  a1fccecc00           mov eax, dword ptr [0xcccefc]
// 00a3a875  85c0                 test eax, eax
// 00a3a877  7409                 je 0xa3a882
// 00a3a879  50                   push eax
// 00a3a87a  e8d9f7dcff           call 0x80a058
// 00a3a87f  83c404               add esp, 4
// 00a3a882  c705dccecc00e0bea500 mov dword ptr [0xcccedc], 0xa5bee0
// 00a3a88c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
