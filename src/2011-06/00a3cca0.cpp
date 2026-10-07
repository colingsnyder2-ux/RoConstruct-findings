// roc 2011-06 00a3cca0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cca0
//
// 00a3cca0  a1b410cd00           mov eax, dword ptr [0xcd10b4]
// 00a3cca5  85c0                 test eax, eax
// 00a3cca7  7409                 je 0xa3ccb2
// 00a3cca9  50                   push eax
// 00a3ccaa  e8a9d3dcff           call 0x80a058
// 00a3ccaf  83c404               add esp, 4
// 00a3ccb2  c7059810cd00e0bea500 mov dword ptr [0xcd1098], 0xa5bee0
// 00a3ccbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
