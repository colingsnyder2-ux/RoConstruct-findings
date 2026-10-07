// roc 2011-06 00a39f60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f60
//
// 00a39f60  a1bcc4cc00           mov eax, dword ptr [0xccc4bc]
// 00a39f65  85c0                 test eax, eax
// 00a39f67  7409                 je 0xa39f72
// 00a39f69  50                   push eax
// 00a39f6a  e8e900ddff           call 0x80a058
// 00a39f6f  83c404               add esp, 4
// 00a39f72  c705a0c4cc00e0bea500 mov dword ptr [0xccc4a0], 0xa5bee0
// 00a39f7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
