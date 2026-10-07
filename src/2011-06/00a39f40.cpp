// roc 2011-06 00a39f40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f40
//
// 00a39f40  a13cc7cc00           mov eax, dword ptr [0xccc73c]
// 00a39f45  85c0                 test eax, eax
// 00a39f47  7409                 je 0xa39f52
// 00a39f49  50                   push eax
// 00a39f4a  e80901ddff           call 0x80a058
// 00a39f4f  83c404               add esp, 4
// 00a39f52  c70520c7cc00e0bea500 mov dword ptr [0xccc720], 0xa5bee0
// 00a39f5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
