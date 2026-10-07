// roc 2011-06 00a3dbc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dbc0
//
// 00a3dbc0  a13c2dcd00           mov eax, dword ptr [0xcd2d3c]
// 00a3dbc5  85c0                 test eax, eax
// 00a3dbc7  7409                 je 0xa3dbd2
// 00a3dbc9  50                   push eax
// 00a3dbca  e889c4dcff           call 0x80a058
// 00a3dbcf  83c404               add esp, 4
// 00a3dbd2  c705202dcd00e0bea500 mov dword ptr [0xcd2d20], 0xa5bee0
// 00a3dbdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
