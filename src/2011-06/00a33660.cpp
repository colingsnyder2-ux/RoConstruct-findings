// roc 2011-06 00a33660  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33660
//
// 00a33660  a1187ccb00           mov eax, dword ptr [0xcb7c18]
// 00a33665  85c0                 test eax, eax
// 00a33667  7409                 je 0xa33672
// 00a33669  50                   push eax
// 00a3366a  e8e969ddff           call 0x80a058
// 00a3366f  83c404               add esp, 4
// 00a33672  c705f87bcb00e0bea500 mov dword ptr [0xcb7bf8], 0xa5bee0
// 00a3367c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
