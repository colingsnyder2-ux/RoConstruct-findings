// roc 2011-06 00a3bbe0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bbe0
//
// 00a3bbe0  a118f6cc00           mov eax, dword ptr [0xccf618]
// 00a3bbe5  85c0                 test eax, eax
// 00a3bbe7  7409                 je 0xa3bbf2
// 00a3bbe9  50                   push eax
// 00a3bbea  e869e4dcff           call 0x80a058
// 00a3bbef  83c404               add esp, 4
// 00a3bbf2  c705f8f5cc00e0bea500 mov dword ptr [0xccf5f8], 0xa5bee0
// 00a3bbfc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
