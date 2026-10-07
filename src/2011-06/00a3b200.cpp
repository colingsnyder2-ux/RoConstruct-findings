// roc 2011-06 00a3b200  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b200
//
// 00a3b200  a180dfcc00           mov eax, dword ptr [0xccdf80]
// 00a3b205  85c0                 test eax, eax
// 00a3b207  7409                 je 0xa3b212
// 00a3b209  50                   push eax
// 00a3b20a  e849eedcff           call 0x80a058
// 00a3b20f  83c404               add esp, 4
// 00a3b212  c70564dfcc00e0bea500 mov dword ptr [0xccdf64], 0xa5bee0
// 00a3b21c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
