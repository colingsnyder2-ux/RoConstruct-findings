// roc 2011-06 00a3ad90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ad90
//
// 00a3ad90  a1c0dacc00           mov eax, dword ptr [0xccdac0]
// 00a3ad95  85c0                 test eax, eax
// 00a3ad97  7409                 je 0xa3ada2
// 00a3ad99  50                   push eax
// 00a3ad9a  e8b9f2dcff           call 0x80a058
// 00a3ad9f  83c404               add esp, 4
// 00a3ada2  c705a4dacc00e0bea500 mov dword ptr [0xccdaa4], 0xa5bee0
// 00a3adac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
