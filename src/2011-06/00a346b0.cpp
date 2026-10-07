// roc 2011-06 00a346b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a346b0
//
// 00a346b0  a1e0b3cb00           mov eax, dword ptr [0xcbb3e0]
// 00a346b5  85c0                 test eax, eax
// 00a346b7  7409                 je 0xa346c2
// 00a346b9  50                   push eax
// 00a346ba  e89959ddff           call 0x80a058
// 00a346bf  83c404               add esp, 4
// 00a346c2  c705c4b3cb00e0bea500 mov dword ptr [0xcbb3c4], 0xa5bee0
// 00a346cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
