// roc 2011-06 00a3dee0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dee0
//
// 00a3dee0  a18c2ecd00           mov eax, dword ptr [0xcd2e8c]
// 00a3dee5  85c0                 test eax, eax
// 00a3dee7  7409                 je 0xa3def2
// 00a3dee9  50                   push eax
// 00a3deea  e869c1dcff           call 0x80a058
// 00a3deef  83c404               add esp, 4
// 00a3def2  c705702ecd00e0bea500 mov dword ptr [0xcd2e70], 0xa5bee0
// 00a3defc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
