// roc 2011-06 00a3eba0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eba0
//
// 00a3eba0  a1a43ecd00           mov eax, dword ptr [0xcd3ea4]
// 00a3eba5  85c0                 test eax, eax
// 00a3eba7  7409                 je 0xa3ebb2
// 00a3eba9  50                   push eax
// 00a3ebaa  e8a9b4dcff           call 0x80a058
// 00a3ebaf  83c404               add esp, 4
// 00a3ebb2  c705883ecd00e0bea500 mov dword ptr [0xcd3e88], 0xa5bee0
// 00a3ebbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
