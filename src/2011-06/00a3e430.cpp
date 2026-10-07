// roc 2011-06 00a3e430  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e430
//
// 00a3e430  a1a035cd00           mov eax, dword ptr [0xcd35a0]
// 00a3e435  85c0                 test eax, eax
// 00a3e437  7409                 je 0xa3e442
// 00a3e439  50                   push eax
// 00a3e43a  e819bcdcff           call 0x80a058
// 00a3e43f  83c404               add esp, 4
// 00a3e442  c7058035cd00e0bea500 mov dword ptr [0xcd3580], 0xa5bee0
// 00a3e44c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
