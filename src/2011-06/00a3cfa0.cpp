// roc 2011-06 00a3cfa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cfa0
//
// 00a3cfa0  a1ac17cd00           mov eax, dword ptr [0xcd17ac]
// 00a3cfa5  85c0                 test eax, eax
// 00a3cfa7  7409                 je 0xa3cfb2
// 00a3cfa9  50                   push eax
// 00a3cfaa  e8a9d0dcff           call 0x80a058
// 00a3cfaf  83c404               add esp, 4
// 00a3cfb2  c7059017cd00e0bea500 mov dword ptr [0xcd1790], 0xa5bee0
// 00a3cfbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
