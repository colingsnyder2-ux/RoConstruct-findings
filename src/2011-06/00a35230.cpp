// roc 2011-06 00a35230  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35230
//
// 00a35230  a12cd0cb00           mov eax, dword ptr [0xcbd02c]
// 00a35235  85c0                 test eax, eax
// 00a35237  7409                 je 0xa35242
// 00a35239  50                   push eax
// 00a3523a  e8194eddff           call 0x80a058
// 00a3523f  83c404               add esp, 4
// 00a35242  c70510d0cb00e0bea500 mov dword ptr [0xcbd010], 0xa5bee0
// 00a3524c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
