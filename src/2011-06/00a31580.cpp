// roc 2011-06 00a31580  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31580
//
// 00a31580  a16433cb00           mov eax, dword ptr [0xcb3364]
// 00a31585  85c0                 test eax, eax
// 00a31587  7409                 je 0xa31592
// 00a31589  50                   push eax
// 00a3158a  e8c98addff           call 0x80a058
// 00a3158f  83c404               add esp, 4
// 00a31592  c7054833cb00e0bea500 mov dword ptr [0xcb3348], 0xa5bee0
// 00a3159c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
