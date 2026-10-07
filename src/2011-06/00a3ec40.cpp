// roc 2011-06 00a3ec40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ec40
//
// 00a3ec40  a14c3ccd00           mov eax, dword ptr [0xcd3c4c]
// 00a3ec45  85c0                 test eax, eax
// 00a3ec47  7409                 je 0xa3ec52
// 00a3ec49  50                   push eax
// 00a3ec4a  e809b4dcff           call 0x80a058
// 00a3ec4f  83c404               add esp, 4
// 00a3ec52  c705303ccd00e0bea500 mov dword ptr [0xcd3c30], 0xa5bee0
// 00a3ec5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
