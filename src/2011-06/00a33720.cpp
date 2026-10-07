// roc 2011-06 00a33720  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33720
//
// 00a33720  a1c87ccb00           mov eax, dword ptr [0xcb7cc8]
// 00a33725  85c0                 test eax, eax
// 00a33727  7409                 je 0xa33732
// 00a33729  50                   push eax
// 00a3372a  e82969ddff           call 0x80a058
// 00a3372f  83c404               add esp, 4
// 00a33732  c705ac7ccb00e0bea500 mov dword ptr [0xcb7cac], 0xa5bee0
// 00a3373c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
