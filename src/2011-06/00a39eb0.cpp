// roc 2011-06 00a39eb0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39eb0
//
// 00a39eb0  a128c3cc00           mov eax, dword ptr [0xccc328]
// 00a39eb5  85c0                 test eax, eax
// 00a39eb7  7409                 je 0xa39ec2
// 00a39eb9  50                   push eax
// 00a39eba  e89901ddff           call 0x80a058
// 00a39ebf  83c404               add esp, 4
// 00a39ec2  c7050cc3cc00e0bea500 mov dword ptr [0xccc30c], 0xa5bee0
// 00a39ecc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
