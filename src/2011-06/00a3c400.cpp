// roc 2011-06 00a3c400  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c400
//
// 00a3c400  a1bc04cd00           mov eax, dword ptr [0xcd04bc]
// 00a3c405  85c0                 test eax, eax
// 00a3c407  7409                 je 0xa3c412
// 00a3c409  50                   push eax
// 00a3c40a  e849dcdcff           call 0x80a058
// 00a3c40f  83c404               add esp, 4
// 00a3c412  c705a004cd00e0bea500 mov dword ptr [0xcd04a0], 0xa5bee0
// 00a3c41c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
