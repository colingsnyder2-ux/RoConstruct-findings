// roc 2011-06 00a3e560  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e560
//
// 00a3e560  a15437cd00           mov eax, dword ptr [0xcd3754]
// 00a3e565  85c0                 test eax, eax
// 00a3e567  7409                 je 0xa3e572
// 00a3e569  50                   push eax
// 00a3e56a  e8e9badcff           call 0x80a058
// 00a3e56f  83c404               add esp, 4
// 00a3e572  c7053837cd00e0bea500 mov dword ptr [0xcd3738], 0xa5bee0
// 00a3e57c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
