// roc 2011-06 00a343f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a343f0
//
// 00a343f0  a1b0b6cb00           mov eax, dword ptr [0xcbb6b0]
// 00a343f5  85c0                 test eax, eax
// 00a343f7  7409                 je 0xa34402
// 00a343f9  50                   push eax
// 00a343fa  e8595cddff           call 0x80a058
// 00a343ff  83c404               add esp, 4
// 00a34402  c70594b6cb00e0bea500 mov dword ptr [0xcbb694], 0xa5bee0
// 00a3440c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
