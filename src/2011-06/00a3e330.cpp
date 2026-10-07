// roc 2011-06 00a3e330  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e330
//
// 00a3e330  a15833cd00           mov eax, dword ptr [0xcd3358]
// 00a3e335  85c0                 test eax, eax
// 00a3e337  7409                 je 0xa3e342
// 00a3e339  50                   push eax
// 00a3e33a  e819bddcff           call 0x80a058
// 00a3e33f  83c404               add esp, 4
// 00a3e342  c7053c33cd00e0bea500 mov dword ptr [0xcd333c], 0xa5bee0
// 00a3e34c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
