// roc 2011-06 00a3a8b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a8b0
//
// 00a3a8b0  a1d8cecc00           mov eax, dword ptr [0xccced8]
// 00a3a8b5  85c0                 test eax, eax
// 00a3a8b7  7409                 je 0xa3a8c2
// 00a3a8b9  50                   push eax
// 00a3a8ba  e899f7dcff           call 0x80a058
// 00a3a8bf  83c404               add esp, 4
// 00a3a8c2  c705bccecc00e0bea500 mov dword ptr [0xcccebc], 0xa5bee0
// 00a3a8cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
