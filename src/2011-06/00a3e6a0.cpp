// roc 2011-06 00a3e6a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e6a0
//
// 00a3e6a0  a1ec37cd00           mov eax, dword ptr [0xcd37ec]
// 00a3e6a5  85c0                 test eax, eax
// 00a3e6a7  7409                 je 0xa3e6b2
// 00a3e6a9  50                   push eax
// 00a3e6aa  e8a9b9dcff           call 0x80a058
// 00a3e6af  83c404               add esp, 4
// 00a3e6b2  c705d037cd00e0bea500 mov dword ptr [0xcd37d0], 0xa5bee0
// 00a3e6bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
