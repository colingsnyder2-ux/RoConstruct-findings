// roc 2011-06 00a31260  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31260
//
// 00a31260  a1d833cb00           mov eax, dword ptr [0xcb33d8]
// 00a31265  85c0                 test eax, eax
// 00a31267  7409                 je 0xa31272
// 00a31269  50                   push eax
// 00a3126a  e8e98dddff           call 0x80a058
// 00a3126f  83c404               add esp, 4
// 00a31272  c705b833cb00e0bea500 mov dword ptr [0xcb33b8], 0xa5bee0
// 00a3127c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
