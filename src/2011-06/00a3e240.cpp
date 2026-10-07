// roc 2011-06 00a3e240  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e240
//
// 00a3e240  a16431cd00           mov eax, dword ptr [0xcd3164]
// 00a3e245  85c0                 test eax, eax
// 00a3e247  7409                 je 0xa3e252
// 00a3e249  50                   push eax
// 00a3e24a  e809bedcff           call 0x80a058
// 00a3e24f  83c404               add esp, 4
// 00a3e252  c7054831cd00e0bea500 mov dword ptr [0xcd3148], 0xa5bee0
// 00a3e25c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
