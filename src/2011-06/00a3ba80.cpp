// roc 2011-06 00a3ba80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ba80
//
// 00a3ba80  a1fcf3cc00           mov eax, dword ptr [0xccf3fc]
// 00a3ba85  85c0                 test eax, eax
// 00a3ba87  7409                 je 0xa3ba92
// 00a3ba89  50                   push eax
// 00a3ba8a  e8c9e5dcff           call 0x80a058
// 00a3ba8f  83c404               add esp, 4
// 00a3ba92  c705dcf3cc00e0bea500 mov dword ptr [0xccf3dc], 0xa5bee0
// 00a3ba9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
