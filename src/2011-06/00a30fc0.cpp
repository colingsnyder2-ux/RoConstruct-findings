// roc 2011-06 00a30fc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30fc0
//
// 00a30fc0  a1c429cb00           mov eax, dword ptr [0xcb29c4]
// 00a30fc5  85c0                 test eax, eax
// 00a30fc7  7409                 je 0xa30fd2
// 00a30fc9  50                   push eax
// 00a30fca  e88990ddff           call 0x80a058
// 00a30fcf  83c404               add esp, 4
// 00a30fd2  c705a829cb00e0bea500 mov dword ptr [0xcb29a8], 0xa5bee0
// 00a30fdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
