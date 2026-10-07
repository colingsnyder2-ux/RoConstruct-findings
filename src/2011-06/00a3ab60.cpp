// roc 2011-06 00a3ab60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ab60
//
// 00a3ab60  a100d5cc00           mov eax, dword ptr [0xccd500]
// 00a3ab65  85c0                 test eax, eax
// 00a3ab67  7409                 je 0xa3ab72
// 00a3ab69  50                   push eax
// 00a3ab6a  e8e9f4dcff           call 0x80a058
// 00a3ab6f  83c404               add esp, 4
// 00a3ab72  c705e4d4cc00e0bea500 mov dword ptr [0xccd4e4], 0xa5bee0
// 00a3ab7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
