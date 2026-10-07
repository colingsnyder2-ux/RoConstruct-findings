// roc 2011-06 00a351f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a351f0
//
// 00a351f0  a108d0cb00           mov eax, dword ptr [0xcbd008]
// 00a351f5  85c0                 test eax, eax
// 00a351f7  7409                 je 0xa35202
// 00a351f9  50                   push eax
// 00a351fa  e8594eddff           call 0x80a058
// 00a351ff  83c404               add esp, 4
// 00a35202  c705e8cfcb00e0bea500 mov dword ptr [0xcbcfe8], 0xa5bee0
// 00a3520c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
