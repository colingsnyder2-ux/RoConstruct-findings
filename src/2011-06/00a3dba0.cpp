// roc 2011-06 00a3dba0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dba0
//
// 00a3dba0  a1342bcd00           mov eax, dword ptr [0xcd2b34]
// 00a3dba5  85c0                 test eax, eax
// 00a3dba7  7409                 je 0xa3dbb2
// 00a3dba9  50                   push eax
// 00a3dbaa  e8a9c4dcff           call 0x80a058
// 00a3dbaf  83c404               add esp, 4
// 00a3dbb2  c705182bcd00e0bea500 mov dword ptr [0xcd2b18], 0xa5bee0
// 00a3dbbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
