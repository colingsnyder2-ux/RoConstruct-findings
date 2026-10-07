// roc 2011-06 00a3af80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3af80
//
// 00a3af80  a15ce3cc00           mov eax, dword ptr [0xcce35c]
// 00a3af85  85c0                 test eax, eax
// 00a3af87  7409                 je 0xa3af92
// 00a3af89  50                   push eax
// 00a3af8a  e8c9f0dcff           call 0x80a058
// 00a3af8f  83c404               add esp, 4
// 00a3af92  c70540e3cc00e0bea500 mov dword ptr [0xcce340], 0xa5bee0
// 00a3af9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
