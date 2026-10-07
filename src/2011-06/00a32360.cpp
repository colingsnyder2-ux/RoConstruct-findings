// roc 2011-06 00a32360  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32360
//
// 00a32360  a12063cb00           mov eax, dword ptr [0xcb6320]
// 00a32365  85c0                 test eax, eax
// 00a32367  7409                 je 0xa32372
// 00a32369  50                   push eax
// 00a3236a  e8e97cddff           call 0x80a058
// 00a3236f  83c404               add esp, 4
// 00a32372  c7050063cb00e0bea500 mov dword ptr [0xcb6300], 0xa5bee0
// 00a3237c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
