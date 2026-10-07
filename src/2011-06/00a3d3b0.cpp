// roc 2011-06 00a3d3b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d3b0
//
// 00a3d3b0  a1901ccd00           mov eax, dword ptr [0xcd1c90]
// 00a3d3b5  85c0                 test eax, eax
// 00a3d3b7  7409                 je 0xa3d3c2
// 00a3d3b9  50                   push eax
// 00a3d3ba  e899ccdcff           call 0x80a058
// 00a3d3bf  83c404               add esp, 4
// 00a3d3c2  c705741ccd00e0bea500 mov dword ptr [0xcd1c74], 0xa5bee0
// 00a3d3cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
