// roc 2011-06 00a3da30  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3da30
//
// 00a3da30  a1d827cd00           mov eax, dword ptr [0xcd27d8]
// 00a3da35  85c0                 test eax, eax
// 00a3da37  7409                 je 0xa3da42
// 00a3da39  50                   push eax
// 00a3da3a  e819c6dcff           call 0x80a058
// 00a3da3f  83c404               add esp, 4
// 00a3da42  c705bc27cd00e0bea500 mov dword ptr [0xcd27bc], 0xa5bee0
// 00a3da4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
