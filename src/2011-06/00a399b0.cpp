// roc 2011-06 00a399b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a399b0
//
// 00a399b0  a12cb8cc00           mov eax, dword ptr [0xccb82c]
// 00a399b5  85c0                 test eax, eax
// 00a399b7  7409                 je 0xa399c2
// 00a399b9  50                   push eax
// 00a399ba  e89906ddff           call 0x80a058
// 00a399bf  83c404               add esp, 4
// 00a399c2  c7050cb8cc00e0bea500 mov dword ptr [0xccb80c], 0xa5bee0
// 00a399cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
