// roc 2011-06 00a3baa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3baa0
//
// 00a3baa0  a110f5cc00           mov eax, dword ptr [0xccf510]
// 00a3baa5  85c0                 test eax, eax
// 00a3baa7  7409                 je 0xa3bab2
// 00a3baa9  50                   push eax
// 00a3baaa  e8a9e5dcff           call 0x80a058
// 00a3baaf  83c404               add esp, 4
// 00a3bab2  c705f0f4cc00e0bea500 mov dword ptr [0xccf4f0], 0xa5bee0
// 00a3babc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
