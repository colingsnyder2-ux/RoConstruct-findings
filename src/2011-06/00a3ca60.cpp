// roc 2011-06 00a3ca60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ca60
//
// 00a3ca60  a1b80ecd00           mov eax, dword ptr [0xcd0eb8]
// 00a3ca65  85c0                 test eax, eax
// 00a3ca67  7409                 je 0xa3ca72
// 00a3ca69  50                   push eax
// 00a3ca6a  e8e9d5dcff           call 0x80a058
// 00a3ca6f  83c404               add esp, 4
// 00a3ca72  c705980ecd00e0bea500 mov dword ptr [0xcd0e98], 0xa5bee0
// 00a3ca7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
