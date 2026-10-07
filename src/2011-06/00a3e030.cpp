// roc 2011-06 00a3e030  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e030
//
// 00a3e030  a1b42fcd00           mov eax, dword ptr [0xcd2fb4]
// 00a3e035  85c0                 test eax, eax
// 00a3e037  7409                 je 0xa3e042
// 00a3e039  50                   push eax
// 00a3e03a  e819c0dcff           call 0x80a058
// 00a3e03f  83c404               add esp, 4
// 00a3e042  c705982fcd00e0bea500 mov dword ptr [0xcd2f98], 0xa5bee0
// 00a3e04c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
