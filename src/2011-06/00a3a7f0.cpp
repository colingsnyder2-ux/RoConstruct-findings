// roc 2011-06 00a3a7f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a7f0
//
// 00a3a7f0  a188cfcc00           mov eax, dword ptr [0xcccf88]
// 00a3a7f5  85c0                 test eax, eax
// 00a3a7f7  7409                 je 0xa3a802
// 00a3a7f9  50                   push eax
// 00a3a7fa  e859f8dcff           call 0x80a058
// 00a3a7ff  83c404               add esp, 4
// 00a3a802  c7056ccfcc00e0bea500 mov dword ptr [0xcccf6c], 0xa5bee0
// 00a3a80c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
