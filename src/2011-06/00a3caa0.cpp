// roc 2011-06 00a3caa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3caa0
//
// 00a3caa0  a1440fcd00           mov eax, dword ptr [0xcd0f44]
// 00a3caa5  85c0                 test eax, eax
// 00a3caa7  7409                 je 0xa3cab2
// 00a3caa9  50                   push eax
// 00a3caaa  e8a9d5dcff           call 0x80a058
// 00a3caaf  83c404               add esp, 4
// 00a3cab2  c705280fcd00e0bea500 mov dword ptr [0xcd0f28], 0xa5bee0
// 00a3cabc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
