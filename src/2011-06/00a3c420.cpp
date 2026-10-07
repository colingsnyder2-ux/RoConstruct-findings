// roc 2011-06 00a3c420  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c420
//
// 00a3c420  a17c06cd00           mov eax, dword ptr [0xcd067c]
// 00a3c425  85c0                 test eax, eax
// 00a3c427  7409                 je 0xa3c432
// 00a3c429  50                   push eax
// 00a3c42a  e829dcdcff           call 0x80a058
// 00a3c42f  83c404               add esp, 4
// 00a3c432  c7055c06cd00e0bea500 mov dword ptr [0xcd065c], 0xa5bee0
// 00a3c43c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
