// roc 2011-06 00a312c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a312c0
//
// 00a312c0  a15835cb00           mov eax, dword ptr [0xcb3558]
// 00a312c5  85c0                 test eax, eax
// 00a312c7  7409                 je 0xa312d2
// 00a312c9  50                   push eax
// 00a312ca  e8898dddff           call 0x80a058
// 00a312cf  83c404               add esp, 4
// 00a312d2  c7053835cb00e0bea500 mov dword ptr [0xcb3538], 0xa5bee0
// 00a312dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
