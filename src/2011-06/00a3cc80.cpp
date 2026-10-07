// roc 2011-06 00a3cc80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cc80
//
// 00a3cc80  a18011cd00           mov eax, dword ptr [0xcd1180]
// 00a3cc85  85c0                 test eax, eax
// 00a3cc87  7409                 je 0xa3cc92
// 00a3cc89  50                   push eax
// 00a3cc8a  e8c9d3dcff           call 0x80a058
// 00a3cc8f  83c404               add esp, 4
// 00a3cc92  c7056411cd00e0bea500 mov dword ptr [0xcd1164], 0xa5bee0
// 00a3cc9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
