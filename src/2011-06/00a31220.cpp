// roc 2011-06 00a31220  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31220
//
// 00a31220  a14834cb00           mov eax, dword ptr [0xcb3448]
// 00a31225  85c0                 test eax, eax
// 00a31227  7409                 je 0xa31232
// 00a31229  50                   push eax
// 00a3122a  e8298eddff           call 0x80a058
// 00a3122f  83c404               add esp, 4
// 00a31232  c7052834cb00e0bea500 mov dword ptr [0xcb3428], 0xa5bee0
// 00a3123c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
