// roc 2011-06 00a3a420  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a420
//
// 00a3a420  a1bcc6cc00           mov eax, dword ptr [0xccc6bc]
// 00a3a425  85c0                 test eax, eax
// 00a3a427  7409                 je 0xa3a432
// 00a3a429  50                   push eax
// 00a3a42a  e829fcdcff           call 0x80a058
// 00a3a42f  83c404               add esp, 4
// 00a3a432  c705a0c6cc00e0bea500 mov dword ptr [0xccc6a0], 0xa5bee0
// 00a3a43c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
