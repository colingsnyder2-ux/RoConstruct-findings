// roc 2011-06 00a3bd80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bd80
//
// 00a3bd80  a158f8cc00           mov eax, dword ptr [0xccf858]
// 00a3bd85  85c0                 test eax, eax
// 00a3bd87  7409                 je 0xa3bd92
// 00a3bd89  50                   push eax
// 00a3bd8a  e8c9e2dcff           call 0x80a058
// 00a3bd8f  83c404               add esp, 4
// 00a3bd92  c7053cf8cc00e0bea500 mov dword ptr [0xccf83c], 0xa5bee0
// 00a3bd9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
