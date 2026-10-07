// roc 2011-06 00a31280  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31280
//
// 00a31280  a10034cb00           mov eax, dword ptr [0xcb3400]
// 00a31285  85c0                 test eax, eax
// 00a31287  7409                 je 0xa31292
// 00a31289  50                   push eax
// 00a3128a  e8c98dddff           call 0x80a058
// 00a3128f  83c404               add esp, 4
// 00a31292  c705e033cb00e0bea500 mov dword ptr [0xcb33e0], 0xa5bee0
// 00a3129c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
