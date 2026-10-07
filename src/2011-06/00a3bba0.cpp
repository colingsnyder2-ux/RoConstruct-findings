// roc 2011-06 00a3bba0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bba0
//
// 00a3bba0  a190f5cc00           mov eax, dword ptr [0xccf590]
// 00a3bba5  85c0                 test eax, eax
// 00a3bba7  7409                 je 0xa3bbb2
// 00a3bba9  50                   push eax
// 00a3bbaa  e8a9e4dcff           call 0x80a058
// 00a3bbaf  83c404               add esp, 4
// 00a3bbb2  c70574f5cc00e0bea500 mov dword ptr [0xccf574], 0xa5bee0
// 00a3bbbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
