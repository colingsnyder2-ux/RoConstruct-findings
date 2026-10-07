// roc 2011-06 00a3e600  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e600
//
// 00a3e600  a13437cd00           mov eax, dword ptr [0xcd3734]
// 00a3e605  85c0                 test eax, eax
// 00a3e607  7409                 je 0xa3e612
// 00a3e609  50                   push eax
// 00a3e60a  e849badcff           call 0x80a058
// 00a3e60f  83c404               add esp, 4
// 00a3e612  c7051837cd00e0bea500 mov dword ptr [0xcd3718], 0xa5bee0
// 00a3e61c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
