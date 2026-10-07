// roc 2011-06 00a31300  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31300
//
// 00a31300  a1f435cb00           mov eax, dword ptr [0xcb35f4]
// 00a31305  85c0                 test eax, eax
// 00a31307  7409                 je 0xa31312
// 00a31309  50                   push eax
// 00a3130a  e8498dddff           call 0x80a058
// 00a3130f  83c404               add esp, 4
// 00a31312  c705d435cb00e0bea500 mov dword ptr [0xcb35d4], 0xa5bee0
// 00a3131c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
