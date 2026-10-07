// roc 2011-06 00a3a240  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a240
//
// 00a3a240  a17cc7cc00           mov eax, dword ptr [0xccc77c]
// 00a3a245  85c0                 test eax, eax
// 00a3a247  7409                 je 0xa3a252
// 00a3a249  50                   push eax
// 00a3a24a  e809fedcff           call 0x80a058
// 00a3a24f  83c404               add esp, 4
// 00a3a252  c70560c7cc00e0bea500 mov dword ptr [0xccc760], 0xa5bee0
// 00a3a25c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
