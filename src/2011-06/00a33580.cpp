// roc 2011-06 00a33580  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33580
//
// 00a33580  a1947bcb00           mov eax, dword ptr [0xcb7b94]
// 00a33585  85c0                 test eax, eax
// 00a33587  7409                 je 0xa33592
// 00a33589  50                   push eax
// 00a3358a  e8c96addff           call 0x80a058
// 00a3358f  83c404               add esp, 4
// 00a33592  c705787bcb00e0bea500 mov dword ptr [0xcb7b78], 0xa5bee0
// 00a3359c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
