// roc 2011-06 00a3c3a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c3a0
//
// 00a3c3a0  a11c03cd00           mov eax, dword ptr [0xcd031c]
// 00a3c3a5  85c0                 test eax, eax
// 00a3c3a7  7409                 je 0xa3c3b2
// 00a3c3a9  50                   push eax
// 00a3c3aa  e8a9dcdcff           call 0x80a058
// 00a3c3af  83c404               add esp, 4
// 00a3c3b2  c7050003cd00e0bea500 mov dword ptr [0xcd0300], 0xa5bee0
// 00a3c3bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
