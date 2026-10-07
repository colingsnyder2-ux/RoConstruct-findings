// roc 2011-06 00a3c580  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c580
//
// 00a3c580  a1fc02cd00           mov eax, dword ptr [0xcd02fc]
// 00a3c585  85c0                 test eax, eax
// 00a3c587  7409                 je 0xa3c592
// 00a3c589  50                   push eax
// 00a3c58a  e8c9dadcff           call 0x80a058
// 00a3c58f  83c404               add esp, 4
// 00a3c592  c705e002cd00e0bea500 mov dword ptr [0xcd02e0], 0xa5bee0
// 00a3c59c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
