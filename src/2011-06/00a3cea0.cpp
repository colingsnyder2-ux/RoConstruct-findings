// roc 2011-06 00a3cea0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cea0
//
// 00a3cea0  a1ec16cd00           mov eax, dword ptr [0xcd16ec]
// 00a3cea5  85c0                 test eax, eax
// 00a3cea7  7409                 je 0xa3ceb2
// 00a3cea9  50                   push eax
// 00a3ceaa  e8a9d1dcff           call 0x80a058
// 00a3ceaf  83c404               add esp, 4
// 00a3ceb2  c705cc16cd00e0bea500 mov dword ptr [0xcd16cc], 0xa5bee0
// 00a3cebc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
