// roc 2011-06 00a3cb80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cb80
//
// 00a3cb80  a13c11cd00           mov eax, dword ptr [0xcd113c]
// 00a3cb85  85c0                 test eax, eax
// 00a3cb87  7409                 je 0xa3cb92
// 00a3cb89  50                   push eax
// 00a3cb8a  e8c9d4dcff           call 0x80a058
// 00a3cb8f  83c404               add esp, 4
// 00a3cb92  c7052011cd00e0bea500 mov dword ptr [0xcd1120], 0xa5bee0
// 00a3cb9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
