// roc 2011-06 00a32e60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32e60
//
// 00a32e60  a1e069cb00           mov eax, dword ptr [0xcb69e0]
// 00a32e65  85c0                 test eax, eax
// 00a32e67  7409                 je 0xa32e72
// 00a32e69  50                   push eax
// 00a32e6a  e8e971ddff           call 0x80a058
// 00a32e6f  83c404               add esp, 4
// 00a32e72  c705c469cb00e0bea500 mov dword ptr [0xcb69c4], 0xa5bee0
// 00a32e7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
