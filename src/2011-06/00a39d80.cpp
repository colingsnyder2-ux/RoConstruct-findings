// roc 2011-06 00a39d80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39d80
//
// 00a39d80  a1ecc0cc00           mov eax, dword ptr [0xccc0ec]
// 00a39d85  85c0                 test eax, eax
// 00a39d87  7409                 je 0xa39d92
// 00a39d89  50                   push eax
// 00a39d8a  e8c902ddff           call 0x80a058
// 00a39d8f  83c404               add esp, 4
// 00a39d92  c705d0c0cc00e0bea500 mov dword ptr [0xccc0d0], 0xa5bee0
// 00a39d9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
