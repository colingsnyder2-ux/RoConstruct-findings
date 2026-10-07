// roc 2011-06 00a3e350  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e350
//
// 00a3e350  a1d833cd00           mov eax, dword ptr [0xcd33d8]
// 00a3e355  85c0                 test eax, eax
// 00a3e357  7409                 je 0xa3e362
// 00a3e359  50                   push eax
// 00a3e35a  e8f9bcdcff           call 0x80a058
// 00a3e35f  83c404               add esp, 4
// 00a3e362  c705bc33cd00e0bea500 mov dword ptr [0xcd33bc], 0xa5bee0
// 00a3e36c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
