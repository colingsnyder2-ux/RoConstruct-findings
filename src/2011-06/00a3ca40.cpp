// roc 2011-06 00a3ca40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ca40
//
// 00a3ca40  a11c10cd00           mov eax, dword ptr [0xcd101c]
// 00a3ca45  85c0                 test eax, eax
// 00a3ca47  7409                 je 0xa3ca52
// 00a3ca49  50                   push eax
// 00a3ca4a  e809d6dcff           call 0x80a058
// 00a3ca4f  83c404               add esp, 4
// 00a3ca52  c705fc0fcd00e0bea500 mov dword ptr [0xcd0ffc], 0xa5bee0
// 00a3ca5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
