// roc 2011-06 00a3bfe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bfe0
//
// 00a3bfe0  a10cfdcc00           mov eax, dword ptr [0xccfd0c]
// 00a3bfe5  85c0                 test eax, eax
// 00a3bfe7  7409                 je 0xa3bff2
// 00a3bfe9  50                   push eax
// 00a3bfea  e869e0dcff           call 0x80a058
// 00a3bfef  83c404               add esp, 4
// 00a3bff2  c705f0fccc00e0bea500 mov dword ptr [0xccfcf0], 0xa5bee0
// 00a3bffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
