// roc 2011-06 00a3ec80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ec80
//
// 00a3ec80  a1a03fcd00           mov eax, dword ptr [0xcd3fa0]
// 00a3ec85  85c0                 test eax, eax
// 00a3ec87  7409                 je 0xa3ec92
// 00a3ec89  50                   push eax
// 00a3ec8a  e8c9b3dcff           call 0x80a058
// 00a3ec8f  83c404               add esp, 4
// 00a3ec92  c705843fcd00e0bea500 mov dword ptr [0xcd3f84], 0xa5bee0
// 00a3ec9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
