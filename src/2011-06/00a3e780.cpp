// roc 2011-06 00a3e780  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e780
//
// 00a3e780  a19438cd00           mov eax, dword ptr [0xcd3894]
// 00a3e785  85c0                 test eax, eax
// 00a3e787  7409                 je 0xa3e792
// 00a3e789  50                   push eax
// 00a3e78a  e8c9b8dcff           call 0x80a058
// 00a3e78f  83c404               add esp, 4
// 00a3e792  c7057838cd00e0bea500 mov dword ptr [0xcd3878], 0xa5bee0
// 00a3e79c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
