// roc 2011-06 00a32e40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32e40
//
// 00a32e40  a14c68cb00           mov eax, dword ptr [0xcb684c]
// 00a32e45  85c0                 test eax, eax
// 00a32e47  7409                 je 0xa32e52
// 00a32e49  50                   push eax
// 00a32e4a  e80972ddff           call 0x80a058
// 00a32e4f  83c404               add esp, 4
// 00a32e52  c7053068cb00e0bea500 mov dword ptr [0xcb6830], 0xa5bee0
// 00a32e5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
