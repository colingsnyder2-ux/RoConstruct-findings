// roc 2011-06 00a3aa40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa40
//
// 00a3aa40  a148d3cc00           mov eax, dword ptr [0xccd348]
// 00a3aa45  85c0                 test eax, eax
// 00a3aa47  7409                 je 0xa3aa52
// 00a3aa49  50                   push eax
// 00a3aa4a  e809f6dcff           call 0x80a058
// 00a3aa4f  83c404               add esp, 4
// 00a3aa52  c7052cd3cc00e0bea500 mov dword ptr [0xccd32c], 0xa5bee0
// 00a3aa5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
