// roc 2011-06 00a34a90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34a90
//
// 00a34a90  a1f4b8cb00           mov eax, dword ptr [0xcbb8f4]
// 00a34a95  85c0                 test eax, eax
// 00a34a97  7409                 je 0xa34aa2
// 00a34a99  50                   push eax
// 00a34a9a  e8b955ddff           call 0x80a058
// 00a34a9f  83c404               add esp, 4
// 00a34aa2  c705d8b8cb00e0bea500 mov dword ptr [0xcbb8d8], 0xa5bee0
// 00a34aac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
