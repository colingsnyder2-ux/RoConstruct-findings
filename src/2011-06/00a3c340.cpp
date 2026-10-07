// roc 2011-06 00a3c340  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c340
//
// 00a3c340  a13407cd00           mov eax, dword ptr [0xcd0734]
// 00a3c345  85c0                 test eax, eax
// 00a3c347  7409                 je 0xa3c352
// 00a3c349  50                   push eax
// 00a3c34a  e809dddcff           call 0x80a058
// 00a3c34f  83c404               add esp, 4
// 00a3c352  c7051807cd00e0bea500 mov dword ptr [0xcd0718], 0xa5bee0
// 00a3c35c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
