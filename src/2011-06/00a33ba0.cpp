// roc 2011-06 00a33ba0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33ba0
//
// 00a33ba0  a1cc84cb00           mov eax, dword ptr [0xcb84cc]
// 00a33ba5  85c0                 test eax, eax
// 00a33ba7  7409                 je 0xa33bb2
// 00a33ba9  50                   push eax
// 00a33baa  e8a964ddff           call 0x80a058
// 00a33baf  83c404               add esp, 4
// 00a33bb2  c705b084cb00e0bea500 mov dword ptr [0xcb84b0], 0xa5bee0
// 00a33bbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
