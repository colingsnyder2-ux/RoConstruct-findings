// roc 2011-06 00a3c480  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c480
//
// 00a3c480  a13c03cd00           mov eax, dword ptr [0xcd033c]
// 00a3c485  85c0                 test eax, eax
// 00a3c487  7409                 je 0xa3c492
// 00a3c489  50                   push eax
// 00a3c48a  e8c9dbdcff           call 0x80a058
// 00a3c48f  83c404               add esp, 4
// 00a3c492  c7052003cd00e0bea500 mov dword ptr [0xcd0320], 0xa5bee0
// 00a3c49c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
