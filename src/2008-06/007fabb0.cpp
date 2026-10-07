// roc 2008-06 007fabb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fabb0
//
// 007fabb0  a1e4d39600           mov eax, dword ptr [0x96d3e4]
// 007fabb5  85c0                 test eax, eax
// 007fabb7  7409                 je 0x7fabc2
// 007fabb9  50                   push eax
// 007fabba  e8bb5aeaff           call 0x6a067a
// 007fabbf  83c404               add esp, 4
// 007fabc2  c705c8d3960030b78000 mov dword ptr [0x96d3c8], 0x80b730
// 007fabcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
