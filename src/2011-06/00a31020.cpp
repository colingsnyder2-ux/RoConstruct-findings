// roc 2011-06 00a31020  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31020
//
// 00a31020  a1242acb00           mov eax, dword ptr [0xcb2a24]
// 00a31025  85c0                 test eax, eax
// 00a31027  7409                 je 0xa31032
// 00a31029  50                   push eax
// 00a3102a  e82990ddff           call 0x80a058
// 00a3102f  83c404               add esp, 4
// 00a31032  c705082acb00e0bea500 mov dword ptr [0xcb2a08], 0xa5bee0
// 00a3103c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
