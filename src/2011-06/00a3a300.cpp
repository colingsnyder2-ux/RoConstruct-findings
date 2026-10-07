// roc 2011-06 00a3a300  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a300
//
// 00a3a300  a1bcc8cc00           mov eax, dword ptr [0xccc8bc]
// 00a3a305  85c0                 test eax, eax
// 00a3a307  7409                 je 0xa3a312
// 00a3a309  50                   push eax
// 00a3a30a  e849fddcff           call 0x80a058
// 00a3a30f  83c404               add esp, 4
// 00a3a312  c705a0c8cc00e0bea500 mov dword ptr [0xccc8a0], 0xa5bee0
// 00a3a31c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
