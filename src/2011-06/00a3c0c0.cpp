// roc 2011-06 00a3c0c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c0c0
//
// 00a3c0c0  a1d8fecc00           mov eax, dword ptr [0xccfed8]
// 00a3c0c5  85c0                 test eax, eax
// 00a3c0c7  7409                 je 0xa3c0d2
// 00a3c0c9  50                   push eax
// 00a3c0ca  e889dfdcff           call 0x80a058
// 00a3c0cf  83c404               add esp, 4
// 00a3c0d2  c705bcfecc00e0bea500 mov dword ptr [0xccfebc], 0xa5bee0
// 00a3c0dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
