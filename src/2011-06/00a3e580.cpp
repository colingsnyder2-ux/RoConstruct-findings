// roc 2011-06 00a3e580  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e580
//
// 00a3e580  a1d436cd00           mov eax, dword ptr [0xcd36d4]
// 00a3e585  85c0                 test eax, eax
// 00a3e587  7409                 je 0xa3e592
// 00a3e589  50                   push eax
// 00a3e58a  e8c9badcff           call 0x80a058
// 00a3e58f  83c404               add esp, 4
// 00a3e592  c705b836cd00e0bea500 mov dword ptr [0xcd36b8], 0xa5bee0
// 00a3e59c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
