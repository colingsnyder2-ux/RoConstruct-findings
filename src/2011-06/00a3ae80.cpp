// roc 2011-06 00a3ae80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ae80
//
// 00a3ae80  a10cddcc00           mov eax, dword ptr [0xccdd0c]
// 00a3ae85  85c0                 test eax, eax
// 00a3ae87  7409                 je 0xa3ae92
// 00a3ae89  50                   push eax
// 00a3ae8a  e8c9f1dcff           call 0x80a058
// 00a3ae8f  83c404               add esp, 4
// 00a3ae92  c705f0dccc00e0bea500 mov dword ptr [0xccdcf0], 0xa5bee0
// 00a3ae9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
