// roc 2011-06 00a3cd40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cd40
//
// 00a3cd40  a1e413cd00           mov eax, dword ptr [0xcd13e4]
// 00a3cd45  85c0                 test eax, eax
// 00a3cd47  7409                 je 0xa3cd52
// 00a3cd49  50                   push eax
// 00a3cd4a  e809d3dcff           call 0x80a058
// 00a3cd4f  83c404               add esp, 4
// 00a3cd52  c705c813cd00e0bea500 mov dword ptr [0xcd13c8], 0xa5bee0
// 00a3cd5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
