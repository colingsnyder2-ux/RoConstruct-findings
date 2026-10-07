// roc 2011-06 00a32280  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32280
//
// 00a32280  a15060cb00           mov eax, dword ptr [0xcb6050]
// 00a32285  85c0                 test eax, eax
// 00a32287  7409                 je 0xa32292
// 00a32289  50                   push eax
// 00a3228a  e8c97dddff           call 0x80a058
// 00a3228f  83c404               add esp, 4
// 00a32292  c7053060cb00e0bea500 mov dword ptr [0xcb6030], 0xa5bee0
// 00a3229c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
