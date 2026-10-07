// roc 2011-06 00a3e470  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e470
//
// 00a3e470  a11c36cd00           mov eax, dword ptr [0xcd361c]
// 00a3e475  85c0                 test eax, eax
// 00a3e477  7409                 je 0xa3e482
// 00a3e479  50                   push eax
// 00a3e47a  e8d9bbdcff           call 0x80a058
// 00a3e47f  83c404               add esp, 4
// 00a3e482  c7050036cd00e0bea500 mov dword ptr [0xcd3600], 0xa5bee0
// 00a3e48c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
